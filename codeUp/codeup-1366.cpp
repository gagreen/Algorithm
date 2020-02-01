#include<stdio.h>
#include<stdlib.h>
 
int main(){
    int i, j, n;
    scanf("%d", &n);
    for(i=1; i<=n; i++){//세로 
        printf("*");
        for(j=1; j<=n-2; j++){//가로 
            if(i==1 || i==n || i==n/2+1 || j==n/2){
                printf("*");
            }else{
                if(j+1==i || j+1==n-i+1){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
        }
        printf("*\n");
    }
    return 0; 
}
