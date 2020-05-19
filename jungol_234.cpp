#include <stdio.h>

int arr[100] = {0,};

int recMul(int n){
	if(n == 1){
		return 1;
	}
	if(n == 2){
		return 2;
	}
	
	if(arr[n] == 0){
		arr[n] = (recMul(n-1) * recMul(n-2))%100;
	}
	
 	return arr[n];
}

int main(){
	int n;
	
	scanf("%d", &n);
	printf("%d", recMul(n));
	
	return 0;
}
