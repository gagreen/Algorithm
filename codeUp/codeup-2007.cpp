#include <stdio.h>
#include <stdlib.h> 
 
int main(){
    int n, i, index;
    scanf("%d", &n);
    int *a = (int*) malloc(sizeof(int) *n);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    if(a[0]<a[1]){ //�������� 
        index = 1;
        for(i=0; i<n-1; i++){
            if(a[i]>a[i+1]){
                index = 3;
                break;
            }
        }
    }
    else{ //�������� 
        index = 2;
        for(i=0; i<n-1; i++){
            if(a[i]<a[i+1]){
                index = 3;
                break;
            }
        }
    }
    if(index == 1){
        printf("��������");
    }
    else if(index == 2){
        printf("��������");
    }
    else if(index == 3){
        printf("����");
    }
     
    free(a);
    return 0;
}
