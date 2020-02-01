#include <stdio.h>
 
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a+b);
    printf("%d\n", a-b);
    printf("%d\n", a*b);
    printf("%d\n", a/b);
    printf("%d\n", a%b);
    printf("%.2lf\n", (a*1.0)/b);
    return 0;
}
