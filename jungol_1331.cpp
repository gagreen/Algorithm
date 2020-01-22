#include <stdio.h>

int main() {
	int n, i, j, x, y, count;
	int arr[303][303] = {0, };
	int index = 0;
	
	scanf("%d", &n);
	count = n;
	x = -1;
	y = n;
	
	while(count > 0) {
		for(i=0; i<count; i++){
			arr[++x][--y] = (index++)%26+65;
		}		
		count--;
		
		for(i=0; i<count; i++){
			arr[++x][++y] = (index++)%26+65;
		}
		
		for(i=0; i<count; i++){
			arr[--x][++y] = (index++)%26+65;
		}	
	
		for(i=0; i<count-1; i++){
			arr[--x][--y] = (index++)%26+65;
		}
		
		x--;
	}
	
	for(i=0; i<=n*2-1; i++){
		for(j=0; j<n*2-1; j++){
			if(arr[i][j] == 0) {
				printf("  ");
			}
			else {
				printf("%c ", arr[i][j]);
			}
				
		}
		printf("\n");
	}
}

