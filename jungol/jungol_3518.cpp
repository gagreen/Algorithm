#include <stdio.h>
#include <stdlib.h>

int *arr;
int n;

void quickSort(int low, int high);
void swap(int f, int s);

int main(){
	int i;
	scanf("%d", &n);
	arr = (int*) malloc(sizeof(int) * n);
	
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
	quickSort(0, n-1);
	
	return 0;
}

void quickSort(int low, int high){
	if(low >= high){
		return;
	}
	
	int i, j, pivot;
	
	i = low - 1;
	pivot = arr[high];
	
	for(j=low; j<high; j++){
		if(arr[j] < pivot){
			swap(++i, j);
		}
	}
	
	swap(++i, high);
	
	for(j=0; j<n; j++){
		printf("%d ", arr[j]);
	}
	printf("\n");
	
	quickSort(low, i-1);
	quickSort(i+1, high);
}

void swap(int f, int s){
	int tmp;
	tmp = arr[f];
	arr[f] = arr[s];
	arr[s] = tmp;
}
