#include <stdio.h>
 
int main(){
    int hae;
    scanf("%d", &hae);
    if((hae%4==0 && hae%100!=0) || hae%400==0){
        printf("yes");
    }
    else{
        printf("no");
    }
}
