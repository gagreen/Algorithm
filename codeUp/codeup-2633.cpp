#include <stdio.h>
#include <stdlib.h>
 
int main(){
    int output=0, i, n, k;
    scanf("%d %d", &n, &k);;
    int *a = (int*) malloc(sizeof(int)*n);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]); 
    }
    for(i=0; i<n; i++){
        if(a[i]>=k){
            output = i+1;
            break;
        }
    }
    if(output==0){
        output = n+1;
    }
    printf("%d", output);
    return 0;
}
