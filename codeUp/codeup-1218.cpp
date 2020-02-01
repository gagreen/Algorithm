#include <stdio.h>
 
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(c<a+b)
    {
        if(a==b && b==c)
        {
            printf("Á¤»ï°¢Çü");
        }
        else if(a==b || b==c || c==a)
        {
            printf("ÀÌµîº¯»ï°¢Çü");
        }
        else if(a*a + b*b == c*c)
        {
            printf("Á÷°¢»ï°¢Çü"); 
        }
        else
        {
            printf("»ï°¢Çü");
        }
    }
    else
    {
        printf("»ï°¢Çü¾Æ´Ô");
    }
}
