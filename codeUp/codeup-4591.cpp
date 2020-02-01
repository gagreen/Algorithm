#include <stdio.h>
 
int main(){
    int a[9], i, max = 0, index;
    for(i=0; i<9; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<9; i++){
        if(max < a[i]){
            max = a[i];
            index = i+1;
        }
    }
    printf("%d\n%d", max, index);
}
