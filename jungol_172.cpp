#include <stdio.h>

void numSq(int n){
	int i, j;
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			printf("%d ", i*j);
		}
		printf("\n");
	}
}

int main(){
	int input;
	
	scanf("%d", &input);
	numSq(input);
	
	return 0;
}
