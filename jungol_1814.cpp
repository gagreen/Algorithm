#include <stdio.h>

int main(){
	int arr[50];
	int n, i, j, tmp, cnt=0;
	
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	// End of input
	
	for(i=1; i<n; i++){
		if(arr[i] < arr[i-1]){
			tmp = arr[i];
			for(j=i; j>0; j--){
				if(arr[j-1]<tmp){
					break;
				}
				cnt++;
				arr[j] = arr[j-1];
			}
			arr[j] = tmp;
		}
	}
	
//	for(i=0; i<n; i++){
//		printf("%d ", arr[i]);
//	}
	
	printf("%d", cnt);
}
