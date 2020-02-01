#include <stdio.h>
#include <stdlib.h>
 
int main(){
    int n, i, j, num=1, sum=0;
    scanf("%d", &n);
    int **a = (int **) malloc(sizeof(int*)*n);
    for(i=0; i<n; i++){
        a[i] = (int *) malloc(sizeof(int)*n);
        for(j=0; j<n; j++){
            a[i][j] = num;
            if(i == 0 || i == n-1){
                sum += a[i][j];
            }
            else if(j == 0 || j == n-1){
                sum += a[i][j];
            }
            num++;
        }
        free(a[i]);
    }
    printf("%d", sum);
    free(a);
}
