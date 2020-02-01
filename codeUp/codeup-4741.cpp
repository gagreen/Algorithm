#include <stdio.h>
 
int main(){
    int a, b, n;
    scanf("%d %d %d", &a, &b, &n);
    b += n;
    while(b >= 60){
        b -= 60;
        a++;
    }
    while(a >= 24){
        a -= 24;
    }
    printf("%d %d", a, b);
}
