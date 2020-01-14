#include <stdio.h>

int main() {
	int n, i, j;
	int arr[100][100] = {0,};
	char index = 'A';
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		if (i%2 != 0){
			for(j=0;j<n;j++){
				arr[j][i] = index++;
				if(index > 'Z'){
					index = 'A';
				}
			}			
		}
		else {
			for(j=n-1; j>=0; j--){
				arr[j][i] = index++;
				if(index > 'Z'){
					index = 'A';
				}
			}
		}
	}
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
}
