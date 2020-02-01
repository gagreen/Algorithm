#include <stdio.h>
#include <stdlib.h>
 
int main(){
    int n, m, a, b;
    scanf("%d %d", &n, &m);
    a = (n+m)/2;
    b = (n-m)/2;
    printf("%d\n%d", a, b);
    return 0;
}
