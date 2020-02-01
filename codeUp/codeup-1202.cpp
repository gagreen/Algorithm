#include <stdio.h>
 
int main()
{
    int score;
    char a;
    scanf("%d", &score);
    if(score >= 90)
    {
        a = 'A';
    }
    else if(score >= 80)
    {
        a = 'B';
    }
    else if(score >= 70)
    {
        a = 'C';
    }
    else if(score >= 60)
    {
        a = 'D';
    }
    else
    {
        a = 'F';
    }
    printf("%c", a);
    return 0;
}
