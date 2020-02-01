#include <stdio.h>
int a=0;
 
int tr(int n)
{
    if(n == 1)
    {
        printf("*");
 
    }
    else if(n == a)
    {
        a=0;
        tr(n-1);
        printf("\n");
         
    }
    else
    {
        a++;
        tr(n);
        printf("*");
         
    }
}
 
int main()
{
    int n;
    scanf("%d", &n);
    tr(n); 
}
