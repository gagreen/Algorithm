#include <stdio.h>
#include <stdlib.h> 
 
int main(){
    int n, i, index;
    scanf("%d", &n);
    int *a = (int*) malloc(sizeof(int) *n);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    if(a[0]<a[1]){ //오름차순 
        index = 1;
        for(i=0; i<n-1; i++){
            if(a[i]>a[i+1]){
                index = 3;
                break;
            }
        }
    }
    else{ //내림차순 
        index = 2;
        for(i=0; i<n-1; i++){
            if(a[i]<a[i+1]){
                index = 3;
                break;
            }
        }
    }
    if(index == 1){
        printf("오름차순");
    }
    else if(index == 2){
        printf("내림차순");
    }
    else if(index == 3){
        printf("섞임");
    }
     
    free(a);
    return 0;
}
