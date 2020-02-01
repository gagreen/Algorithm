#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[101];
    int i, len;
    scanf("%[^\n]", s);
    len =  strlen (s);
    for(i=0; i<len; i++)
    {
        printf("%c", s[len-i-1]);
    }
    return 0;
}
