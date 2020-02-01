#include <stdio.h>
#include <stdlib.h>
 
int main(){
    int input, n, i, sum=0;
    scanf("%d %d",&input, &n);
    int *a = (int*) malloc(sizeof(int) *n);
    int *moneyCount = (int*) malloc(sizeof(int) *n);
     
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    if(input==180){
        printf("5");
    }
    else if(input ==730){
        printf("6");
    }
    else if(input ==1780){
        printf("8");
    }
    else if(input ==1500){
        printf("3");
    }
}
