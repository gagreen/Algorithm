#include<stdio.h>
#include<stdlib.h>

int main() {
	int n, i, j, k;
	int arr[100][100] = {'\0',};
	char index = 'A';
	
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		for(j=i, k=n-1; j<n; j++, k--) {
			arr[j][k] = index++;
			if (index > 'Z') {
				index = 'A';
			}
		}
	}
	
	for(i=0; i<n; i++) {
		for (j=0; j<n; j++){
			if (arr[i][j] == '\0') {
				printf("  ");
			}
			else {
				printf("%c ", arr[i][j]);
			}
		}
		printf("\n");
	}
}
