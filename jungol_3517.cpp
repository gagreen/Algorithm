#include <stdio.h>
#include <stdlib.h>

int *data;

int binarySearch(int low, int high, int target);

int main(){
	int i, n, q, what;
	
	scanf("%d", &n);
	data = (int*) malloc(sizeof(int) * n);
	for(i=0; i<n; i++){
		scanf("%d", &data[i]);
	}
	
	scanf("%d", &q);
	for(i=0; i<q; i++){
		scanf("%d", &what);
		printf("%d ", binarySearch(0, n, what));
	}
	
	free(data);
}

int binarySearch(int low, int high, int target){
	if(low > high){ // ¾ø´Ù¸é 
		return -1;
	}
	int mid = (low + high) / 2;
	
	if(data[mid] == target){
		return mid;
	}
	if(data[mid] > target){
		return binarySearch(low, mid-1, target);
	}
	else{
		return binarySearch(mid+1, high, target);
	}
}
