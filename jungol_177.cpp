#include <stdio.h>

int abs(int num){
	return num > 0 ? num : -1*num;
}

int sumArr(int *arr, int n){
	int i;
	int sum = 0;
	for(i=0; i<n; i++){
		sum += abs(arr[i]);
	}
	
	return sum;
}

int main(){
	int arr[5];
	int i, n=5;
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
	printf("%d", sumArr(arr, n));
	
	return 0;
}
