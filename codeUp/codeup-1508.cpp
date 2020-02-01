#include <stdio.h>
 
int main(){
    int n, i, j;
    scanf("%d", &n);
    int a[20][20] ={ 0, };
    for(i=0; i<n; i++){
        scanf("%d", &a[i][0]);
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(a[j][i] == 0){
                a[j][i] = a[j][i-1] - a[j-1][i-1];
            }
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<i+1; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
