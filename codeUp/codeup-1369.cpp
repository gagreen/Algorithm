#include <stdio.h>
#include <stdlib.h>
 
int main(){
    int n, k, i, j;
    scanf("%d %d", &n, &k);
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(i==0 || j==0 || i==n-1 || j==n-1){
                printf("*");
            }
            else if((j+i+1)%k==0){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n"); 
    }
}
