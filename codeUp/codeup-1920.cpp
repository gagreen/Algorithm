#include <stdio.h>
 
void binary(int b){
    if(b>=2){
        binary(b/2);
        printf("%d", b%2);
    }
    else{
        printf("%d", b);
    }
}
int main(){
    int i, n;
    scanf("%d", &n);
    binary(n);
    return 0;
}
