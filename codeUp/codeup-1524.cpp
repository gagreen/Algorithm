#include <stdio.h>
 
int main(){
    int a[9][9], i, j, x, y, output=0;
    for(i=0; i<9; i++){
        for(j=0; j<9; j++){
            scanf("%d", &a[i][j]);
        }
    }
    scanf("%d %d", &x, &y);
    if(a[x-1][y-1] == 1){
        output = -1;
    }
    else{
        if(x == 9){
            if(y==9){
                if(a[x-1][y-2] == 1){
                    output++;
                }
                if(a[x-2][y-1] == 1){
                    output++;
                }
                if(a[x-2][y-2] == 1){
                    output++;
                }
            }
            else if(y==1){
                if(a[x-1][y] == 1){
                    output++;
                }
                if(a[x-2][y-1] == 1){
                    output++;
                }
                if(a[x-2][y-2] == 1){
                    output++;
                }
            }
            else{
                if(a[x-1][y] == 1){
                    output++;
                }
                if(a[x-1][y-2] == 1){
                    output++;
                }
                if(a[x-2][y] == 1){
                    output++;
                }
                if(a[x-2][y-1] == 1){
                    output++;
                }
                if(a[x-2][y-2] == 1){
                    output++;
                }
            }
        }
        else if(x == 1){
            if(y==9){
                if(a[x-1][y-2] == 1){
                    output++;
                }
                if(a[x][y-1] == 1){
                    output++;
                }
                if(a[x][y-2] == 1){
                    output++;
                }
            }
            else if(y==1){
                if(a[x-1][y] == 1){
                    output++;
                }
                if(a[x][y-1] == 1){
                    output++;
                }
                if(a[x][y] == 1){
                    output++;
                }
            }
            else{
                if(a[x-1][y] == 1){
                    output++;
                }
                if(a[x-1][y-2] == 1){
                    output++;
                }
                if(a[x][y] == 1){
                    output++;
                }
                if(a[x][y-1] == 1){
                    output++;
                }
                if(a[x][y-2] == 1){
                    output++;
                }
            }
        }
        else if(y == 9){
            if(a[x-2][y-2] == 1){
                output++;
            }
            if(a[x-2][y-1] == 1){
                output++;
            }
            if(a[x-1][y-2] == 1){
                output++;
            }
            if(a[x][y-1] == 1){
                output++;
            }
            if(a[x][y-2] == 1){
                output++;
            }
        }
        else if(y == 0){
            if(a[x-2][y] == 1){
                output++;
            }
            if(a[x-2][y-1] == 1){
                output++;
            }
            if(a[x-1][y] == 1){
                output++;
            }
            if(a[x][y-1] == 1){
                output++;
            }
            if(a[x][y] == 1){
                output++;
            }
        }
        else{
            if(a[x-1][y] == 1){
                output++;
            }
            if(a[x-1][y-2] == 1){
                output++;
            }
            if(a[x][y] == 1){
                output++;
            }
            if(a[x][y-1] == 1){
                output++;
            }
            if(a[x][y-2] == 1){
                output++;
            }
            if(a[x-2][y] == 1){
                output++;
            }
            if(a[x-2][y-1] == 1){
                output++;
            }
            if(a[x-2][y-2] == 1){
                output++;
            }
        }
    }
    printf("%d", output);
}
