#include <stdio.h>
 
void wo(int n)
{
    if(n != 1)
    {
        if(n%2 == 1)
        {
            n = n*3+1; 
            wo(n);
            printf("%d\n", n);
             
        }
        else if(n%2 == 0)
        {
            n /= 2;
            wo(n);
            printf("%d\n", n);
             
        }
    }
     
}
 
int main()
{
    int n;
    scanf("%d", &n);
    wo(n);
    printf("%d", n); 
}
