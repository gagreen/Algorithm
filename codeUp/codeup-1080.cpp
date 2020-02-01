#include <stdio.h>
 
int main()
{
    int i, n, sum=0;
    scanf("%d", &n);
    for(i=1; ; i++)
    {
        sum += i;
        if(sum >= n)
        {
            printf("%d", i);
            break;
        }
    }
    return 0;
}
