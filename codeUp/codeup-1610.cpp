#include <stdio.h>
 
char output[101];
char *mysubstr(char *str, int start, int count)
{
     
    int i=0;
    for(i=0; i<count; i++)
    {
        output[i] = str[i+start];
    }
    return output;
}
 
int main()
{
    int start, count;
    char s[101];
    scanf("%s", s);
    scanf("%d %d", &start, &count);
 
    printf("%s", mysubstr(s, start, count));
    return 0;
}
