#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, m, i, j;
	int arr[30][30] = {0, };
	scanf("%d %d", &n, &m);
	
	arr[0][0] = 1;
	for (i=1; i<n; i++){
		arr[i][0] = 1;
		for(j=1; j<n; j++){
			arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
		}
	}
	

	
	if (m == 1){
		for (i=0; i<n; i++){
			for(j=0; j<n; j++){
				if (arr[i][j] != 0){
					printf("%d ", arr[i][j]);
				}
			}
			printf("\n");
		}		
	}
	else if (m == 2) {
		for(i=n-1; i>=0; i--){
			for(j=i; j<n-1; j++) {
				printf(" ");
			}
			for(j=0; j<n; j++){
				if (arr[i][j] != 0){
					printf("%d ", arr[i][j]);
				}
			}
			printf("\n");	
		}
	}
	else if (m == 3) {
		for(i=n-1; i>=0; i--){
			for(j=n-1; j>=0; j--){
				if (arr[j][i] != 0){
					printf("%d ", arr[j][i]);
				}
			}
			printf("\n");	
		}		
	}
	return 0;
}
