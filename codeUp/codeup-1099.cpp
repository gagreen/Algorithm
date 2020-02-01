#include<stdio.h>
#include<stdlib.h>
 
int main(){
    int a[10][10];
    int x=1, y=1, i, j;
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            scanf("%d", &a[i][j]);
        }
    }
    a[x][y] = 9;
    while(a[x][y] != 2){
        if(a[x+1][y] == 1 && a[x][y+1] == 1){
            break;
        }
        else if(x == 9 && y == 9){
            break;
        }
        else if(a[x][y+1] == 2){
            a[x][y+1] = 9;
            break;
        }
        else if(a[x+1][y] == 2 && a[x][y+1] == 1){
            a[x+1][y] = 9;
            break;
        }
        else{
             
            if(a[x][y+1] != 0){
                x++;
            }else{
                y++;
            }
            a[x][y] = 9;
        }
    }
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
