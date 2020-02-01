#include <stdio.h>
 
int main(){
    int a[4][2], i, j, max=0, p=0;
    for(i=0; i<4; i++){
        for(j=0; j<2; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i<4; i++){
        p -= a[i][0];
        p += a[i][1];
        if(max<p){
            max = p;
        }
    }
    printf("%d", max); 
    return 0;
}
