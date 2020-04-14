#include <stdio.h>

int gugu(int start, int end){
	if(end < start){
		int tmp = start;
		start = end;
		end = tmp;
	}
	int i, j;
	for(i=start; i<=end; i++){
		printf("== %ddan ==\n", i);
		for(j=1; j<=9; j++){
			printf("%d * %d = %2d\n", i, j, i*j);
		}
		printf("\n");
	}
}

int main(){
	int a, b;
	
	scanf("%d %d", &a, &b);
	gugu(a, b);
}
