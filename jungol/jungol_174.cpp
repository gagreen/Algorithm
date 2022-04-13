#include <stdio.h>

int  pSum(int a, int b, int c){
	return a+b+c;
}

void print(int *a, int *b, int *c){
	int i;
	int sum[4] = {0};
	for(i=0; i<3; i++){
		printf("%d %d %d %d\n", a[i], b[i], c[i], pSum(a[i], b[i], c[i]));
		sum[0] += a[i];
		sum[1] += b[i];
		sum[2] += c[i];
		sum[3] += pSum(a[i], b[i], c[i]);
	}
	for(i=0; i<4; i++){
		printf("%d ", sum[i]);
	}
	
}


int main(){
	int i;
	int n = 3;
	int a[3], b[3], c[3];
	
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
		scanf("%d", &b[i]);
		scanf("%d", &c[i]);
	}
	
	print(a, b, c);
	
	return 0;
}
