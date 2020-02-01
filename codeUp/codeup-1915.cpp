#include <stdio.h>
int a=1, b=1, sum, count=1, n;
int fi(int count){
    if(count==n){
        return a;
    }
    else{
        sum=a+b;
        a=b;
        b=sum;
        count++;
        fi(count);
    }
}
int main(){
    scanf("%d", &n);
    printf("%d", fi(count));
}
