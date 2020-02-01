#include<stdio.h>
#include<stdlib.h>
 
int main(){
    int h, w, n, l, d, x, y, i, j;
    int a[100][100] = {0,};
    scanf("%d %d", &h, &w);
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d %d %d %d", &l, &d, &x, &y);
         
        if(d == 0){
            for(j=0; j<l; j++){
                a[x-1][y+j-1] = 1;
            }
        }
        else if(d ==1){
            for(j=0; j<l; j++){
                a[x+j-1][y-1] = 1;
            }
        }
    }
    for(i=0; i<h; i++){
        for(j=0; j<w; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
