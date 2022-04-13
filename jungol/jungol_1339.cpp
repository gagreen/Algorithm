#include <stdio.h>

int main() {
	int n, i, j;
	int arr[100][100] = {0,};
	char index = 'A';
	
	scanf("%d", &n);
	if (n<1 || n>100 || n%2 == 0){
		printf("INPUT ERROR");
		return 0;
	}
	for (i=n/2; i>=0; i--) {
		for (j=i; j<=(n/2)*2-i; j++){
			arr[j][i] = index++;
			if(index > 'Z'){
				index = 'A';
			}
		}
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(arr[i][j] != 0){
				printf("%c ", arr[i][j]);	
			}
		}
		printf("\n");
	}
	return 0;
}
