#include <stdio.h>
#include <stdlib.h> 
 
int main(){
    int n, i, j;
    scanf("%d", &n);
    int *a = (int *) malloc (sizeof(int) * n);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++){
        printf("%d: ", i+1);
        for(j=0; j<n; j++){
            if(i == j){
                continue;
            }
            else if(a[i] == a[j]){
                printf("= ");
            }
            else if(a[i] < a[j]){
                printf("< ");
            }
            else if(a[i] > a[j]){
                printf("> ");
            }
        }
        printf("\n");
    }
    free(a);
    return 0;
}
