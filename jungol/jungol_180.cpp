#include <stdio.h>
#define SIZE 7

void arrInput(int *arr){
	int i;
	for(i=0; i<SIZE; i++){
		scanf("%d", &arr[i]);
	}
}

void arrSort(int *arr){
	int i, j;
	for(i=SIZE-1; i>=SIZE-3; i--){
		for(j=0; j<i; j++){
			if(arr[j] > arr[j+1]){
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}

void arrPrint(int *arr){
	int i;
	for(i=0; i<SIZE; i++){
		printf("%d ", arr[i]);
	}
}

int main(){
	int arr[SIZE];
	
	arrInput(arr);
	arrSort(arr);
	arrPrint(arr);
}
