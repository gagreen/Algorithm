#include <stdio.h>
#include <stdlib.h>
 
int main(){
    int i, sum=0, n, count=0;
    scanf("%d", &n);
    int *a = (int*) malloc(sizeof(int)*n);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
        if(a[i] == 1){
            sum += a[i]+count;
            count++;
        }else{
            count = 0;
        }
    }
    printf("%d", sum);
    free(a);
    return 0;
}
