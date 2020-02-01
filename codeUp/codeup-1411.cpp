#include <stdio.h>
#include <stdlib.h>
 
int main(){
    int n, i, sum=0, hap=0;
    scanf("%d", &n);
    int *a = (int*) malloc(sizeof(int) *n-1);
    for(i=0; i<n-1; i++){
        scanf("%d", &a[i]);
        sum += a[i];
    }
    for(i=1; i<=n; i++){
        hap += i;
    }
    printf("%d", hap-sum);
}
