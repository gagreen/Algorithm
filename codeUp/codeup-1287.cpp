#include <stdio.h>
 
int main()
{
    int i, j, input;
    scanf("%d", &input);
    for(i=1; i<10; i++)
    {
        for(j=0; j<i*input; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
