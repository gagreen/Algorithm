#include <stdio.h>
 
int main(){
    int a, m, d, n, i;
    scanf("%d %d %d %d", &a, &m, &d, &n);
    for(i=1; i<n; i++){
        a = a * m + d;
    }
    printf("%d", a);
}
