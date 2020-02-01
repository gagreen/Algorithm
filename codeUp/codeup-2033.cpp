#include <stdio.h>
#include <stdlib.h>
 
int main(){
    int k, n, i, j, p;
    scanf("%d %d", &k, &n);
    int **a = (int**) malloc(sizeof(int*) *n);
    for(i=0; i<n; i++){
        a[i] = (int*) malloc(sizeof(int) *2);
        scanf("%d %d", &a[i][0], &a[i][1]);
    }
    scanf("%d", &p);
     
    for(i=0; i<n; i++){
        if(p == a[i][0]){
            p = a[i][1];
        }
        else if(p == a[i][1]){
            p = a[i][0];
        }
        else{
            continue;
        }
    }
    printf("%d", p);
    return 0;
}
