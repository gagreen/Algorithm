#include <stdio.h>

void inputArr(int *arr, int n){
	int i;
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
}

void printArr(int *arr, int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
}

void sortArr(int *arr, int n){
	int i, j, tmp;
	for(i=n-1; i>0; i--){
		for(j=0; j<i; j++){
			if(arr[j] < arr[j+1]){
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}

int main(){
	int n, arr[15] = {0,};
	
	scanf("%d", &n);
	inputArr(arr, n);
	sortArr(arr, n);
	printArr(arr, n);
	
	return 0;
}
