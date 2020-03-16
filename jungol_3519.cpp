#include <stdio.h>

int n;
int a[1000];
int tmp[1000];

void mergeSort(int low, int high);

int main(){
	int i;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	mergeSort(0, n-1);
	
	return 0;
}

void mergeSort(int low, int high){
	if (low >= high){
		return;
	}
	int i, j, k;
	int mid = (low + high) / 2;
	
	mergeSort(low, mid);
	mergeSort(mid+1, high);
	
	i = low; j = mid + 1;
	for(k=low; k<=high; k++){
		if(j > high){
			tmp[k] = a[i++];
		}
		else if(i > mid){
			tmp[k] = a[j++];
		}
		else if(a[i] < a[j]){
			tmp[k] = a[i++];
		}
		else{
			tmp[k] = a[j++];
		}
	}
	
	for(i=low; i<=high; i++){
		a[i] = tmp[i];
	}
	
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}
