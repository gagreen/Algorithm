#include<stdio.h>
#include<stdlib.h>

int sortArr(int len, int *arr){
	int i, j, tmp;
	for(i=0; i<len-1; i++){
		for(j=i+1; j<len; j++){
			if(arr[i]< arr[j]){
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

int main(){
	int n, i;
	int *arr;
	
	scanf("%d", &n);
	arr = (int*) malloc(sizeof(int)*n);
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	sortArr(n, arr);
	for(i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	free(arr);
	
	return 0;
}
