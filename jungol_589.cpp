#include <stdio.h>

int recSum(int n){
	if(n <= 0){
		return 0;
	}
	return n + recSum(n-1);
}

int main(){
	int n;
	
	scanf("%d", &n);
	printf("%d", recSum(n));
	
	return 0;
}
