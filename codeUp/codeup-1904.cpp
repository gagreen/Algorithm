#include <stdio.h>
 
void hol(int a, int b){
    if(a==b){
        if(b%2 != 0){
            printf("%d ", b);
        }
    }
    else{ 
     if(b%2 != 0){
        hol(a, b-1);
        printf("%d ", b);
        }
        else{
            hol(a, b-1);
        }
    }
}
 
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    hol(a, b);
}
