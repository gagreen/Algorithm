#include <stdio.h>
 
int main(){
    int i, max, min;
    int a[5];
    for(i=0; i<5; i++){
        scanf("%d", &a[i]);
    }
     
    max = min = a[0];
    for(i=0; i<5; i++){
        if(max<a[i]){
            max = a[i];
        }
        if(min>a[i]){
            min = a[i];
        }
    }
    printf("%d\n%d", max, min);
}
