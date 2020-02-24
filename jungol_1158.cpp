#include <stdio.h>

int main(){
	int arr[100];
	int n, i, j, tmp;
	
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	// End of input
	
	for(i=1; i<n; i++){
		if(arr[i] < arr[i-1]){ // 이전 데이터보다 크면 
			tmp = arr[i];
			for(j=i; j>0; j--){
				if(arr[j-1]<tmp){
					break;
				}
				arr[j] = arr[j-1];
			}
			arr[j] = tmp;
		}
		
		
		for(j=0; j<n; j++){
			printf("%d ", arr[j]);
		}
		printf("\n");
	}
	
	return 0;
}
