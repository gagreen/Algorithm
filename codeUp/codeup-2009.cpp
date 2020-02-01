#include <stdio.h>
 
int main(){
    int i, k, n, drink=0;
    scanf("%d %d", &k, &n);
    for(i=1; i<=k; i++){
        if(i%n==0){
            drink++;
            k++;
        }
    }
    printf("%d", drink);
    return 0;
}
