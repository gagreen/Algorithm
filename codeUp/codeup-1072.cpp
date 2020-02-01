#include <stdio.h>
 
int main(){
    int n, m;
    scanf("%d", &n);
    while(1){
        scanf("%d", &m);
        if(n==0){
            break;
        }
        printf("%d\n", m);
        n--;
    }
}
