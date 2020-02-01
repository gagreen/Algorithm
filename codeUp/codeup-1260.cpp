#include <stdio.h>
 
int main()
{
    int a, b, sum=0;
    scanf("%d %d", &a, &b);
    for(; a<=b; a++)
    {
        if(a%3 == 0)
        {
            sum += a;
        }
    }
    printf("%d", sum);
    return 0;
}
