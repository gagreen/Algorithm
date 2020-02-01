#include <stdio.h>
#include <stdlib.h> 
 
int main(){
    int i, n, save, count=0;
    scanf("%d", &n);
    int *a = (int*) malloc(sizeof(int) *n);
    int *p = (int*) malloc(sizeof(int) *n/2);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
        if(i%2 == 0){
            save = a[i];
        }
        else{
            p[count] = save>a[i] ? save: a[i];
            count++;
        }
    }
    for(i=0; i<n/2; i++){
        printf("%d ", p[i]);
    }
    free(a);
    free(p);
}
