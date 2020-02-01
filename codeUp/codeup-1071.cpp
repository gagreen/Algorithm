#include <stdio.h>
 
int main(){
    int input;
    while(1){
        scanf("%d", &input);
        printf("%d\n", input);
        if(input==0){
            break;
        }
    }
}
