#include <stdio.h>
#include <stdlib.h>

int getGcd(int a, int b);

int main(){
	int n, i, gcd, lcm;
	int *arr;
	scanf("%d", &n);
	arr = (int*) malloc(sizeof(int)*n);
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	gcd = lcm = arr[0];
	
	for(i=1; i<n; i++){
		gcd = getGcd(gcd, arr[i]);
		lcm = lcm*arr[i] / getGcd(lcm, arr[i]);
	}
	
	printf("%d %d", gcd, lcm);
	
	free(arr);
	return 0;
}

int getGcd(int a, int b){
	if(a%b == 0){
		return b;
	}
	return getGcd(b, a%b);
}
