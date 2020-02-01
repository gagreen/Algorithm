#include <stdio.h>
#include <stdlib.h>
 
int main(){
    int n, count, max=0, maxV, s, e;
    scanf("%d %d", &s , &e);
    for(;s<=e; s++){
        count=1;
        n = s;
        while(n!=1){
            if(n%2!=0){
                n = n*3+1; 
            }
            else {
                n /= 2;
            }
            count++;
        }
        if(max < count){
            max = count;
            maxV = s;
        }
    }
    printf("%d %d", maxV, max);
}
