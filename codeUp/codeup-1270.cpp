#include <stdio.h>
 
int main(){
    int i, n, count=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        if(i%10 == 1){
            count++;
            i += 9; 
        }
    }
    printf("%d", count);
}
