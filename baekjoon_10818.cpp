#include <stdio.h>

int main() {
    int n;
    int i, temp, max=-1000001, min=1000001; // 입력값에서 가장 작은 값-1, 가장 큰 값+1
    
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &temp);
        if(max < temp) {
            max = temp;
        }
        if(min > temp) {
            min = temp;
        }
    }
    
    printf("%d %d", min, max);
}
