#include <stdio.h>
 
long long memo[201] = {0, };
 
long long fibo(int n)
{
    if(n<3)
    {
        return 1;
    }
    else
    {
        if(memo[n] != 0)
        {
            return memo[n];
        }
        else
        {
            memo[n] = (fibo(n-1) + fibo(n-2))%10009;
            return memo[n];
        }
    }
}
 
int main()
{
    int input;
    scanf("%d", &input);
    printf("%lld", fibo(input));
    return 0;
}
