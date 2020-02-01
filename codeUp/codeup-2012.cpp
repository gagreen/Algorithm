#include <stdio.h>
 
int main(){
    int i, j,  a, b, count=0;
    scanf("%d %d", &a, &b);
    for(i=a; i<=b; i++){
        j = i;
        while(j != 0){
            if(j%10 == 1){
                count++;
            }
            j = j /10;
        }
    }
    printf("%d", count);
    return 0;
}
