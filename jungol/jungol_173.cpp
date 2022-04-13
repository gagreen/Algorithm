#include <stdio.h>

int pow(int sma, int big){
	if(sma > big){
		int tmp = sma;
		sma = big;
		big = tmp;
	}
	
	return (big*big) - (sma*sma);
}

int main(){
	int n, m;
	
	scanf("%d %d", &n, &m);
	printf("%d", pow(n, m));
	
	return 0;
}
