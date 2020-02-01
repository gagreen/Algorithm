#include <stdio.h>
 
void printD(int n){
    if(n==1){
        printf("%d", 1);
    }
    else{
        printf("%d\n", n);
        n--;
        printD(n);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    printD(n);
}
