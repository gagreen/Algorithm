#include <stdio.h>
 
int main(){
    int a, b, s, n;
    scanf("%d %d %d %d", &a, &b, &s, &n);
    s += n;
    while(s >= 60){
        s -= 60;
        b++;
    }
    while(b >= 60){
        b -= 60;
        a++;
    }
    while(a >= 24){
        a -= 24;
    }
    printf("%d %d %d", a, b, s);
}
