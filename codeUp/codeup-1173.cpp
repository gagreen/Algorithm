#include <stdio.h>
 
int main(){
    int hour, min;
    scanf("%d %d", &hour, &min);
     
    if(min<30){
        hour--;
        min += 30;
    }
    else{
        min -= 30;
    }
    if(hour<0){
        hour = 23;
    }
    printf("%d %d", hour, min);
} 
