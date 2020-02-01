#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int k, n, i, j, count=0;
    scanf("%d %d", &k, &n);
    int **a = (int**) malloc(sizeof(int*) *k);
     
    for(i=0; i<k; i++)
    {
        a[i] = (int*) malloc(sizeof(int) *k);
        for(j=0; j<k; j++)
        {
            scanf("%d", &a[i][j]);
            if(a[i][j] > -1)
            {
                a[i][j] += n;
            }
            if(a[i][j]>-1 && a[i][j]<6)
            {
                count++;
            }
        }
    }
    printf("%d", count);
}
