#include <stdio.h>
#include <stdlib.h>
 
int main(){
    int i, n, k, count=0;
    scanf("%d %d", &n, &k);
    int *a = (int*) malloc(sizeof(int)*n);
    for(i=1; i<n; i++){
        if(n%i == 0){
            a[count] = i;
            count++;
        }
    }
    printf("%d", a[k-1]);
    return 0;
}
