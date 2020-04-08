#include <stdio.h>

int max(int arr[]){
	int i, max = arr[0];
	for(i=1; i<3; i++){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	return max;
}

int main(){
	int arr[3];
	
	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
	printf("%d", max(arr));
	
	return 0;
}
