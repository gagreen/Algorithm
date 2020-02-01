#include<stdio.h>
 
int main(){
    int r, g, b, i, j, k, count=0;
    scanf("%d %d %d",&r, &g, &b); 
    for(i=0; i<r; i++){
        for(j=0; j<g; j++){
            for(k=0; k<b; k++){
                printf("%d %d %d\n", i, j, k);
                count++;
            }
        }
    }
    printf("%d", count);
}
