#include <stdio.h>
 
int k=1;
 
void print(int n){
    if(k==n){
        printf("%d", n);
    }
    else{
        printf("%d\n", k);
        k++;
        print(n);
    }
}
 
int main(){
    int n;
    scanf("%d", &n);
    print(n); 
}
