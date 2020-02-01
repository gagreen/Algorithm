#include <stdio.h>
 
void wo(int n)
{
    if(n != 1)
    {
        if(n%2 == 1)
        {
            n = n*3+1; 
            printf("%d\n", n);
            wo(n);
        }
        else if(n%2 == 0)
        {
            n /= 2;
            printf("%d\n", n);
            wo(n);
        }
    }
     
}
 
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", n);
    wo(n);
}
