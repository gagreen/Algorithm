#include <stdio.h>
#include <stdlib.h>

int n, x, y;
int check = 1, index = 0;
int **arr;
void init(void);
int insert(int x, int y, int i, int num, int br);

int main() {
	scanf("%d", &n);
	
	// 배열 동적할당 
	init();
	
	// 데이터 삽입 
	insert(0, 0, 0, 1, 0);
	
	for (x=0; x<n; x++){
		for (y=0; y<n; y++){
			if (arr[x][y] != -1) {
				printf("%d ", arr[x][y]);	
			}
		}
		printf("\n");
		free(arr[x]);
	}
	free(arr);
	return 0;
}

void init(void){
	int i, j;
	arr = (int**) malloc(sizeof(int*) * n);
	for(i=0; i<n; i++){
		arr[i] = (int*) malloc (sizeof(int)*n);
		for(j=0; j<n; j++){
			arr[i][j] = -1;
		}
	}
}

int insert(int x, int y, int i, int num, int br) {
	if (x<n && y<n && x>=0 && y>=0 && arr[x][y]==-1){
		arr[x][y] = i%10;
		
		if (num == 1) {
			insert(++x, ++y, ++i, num, 0);
		}
		else if (num == 2) {
			insert(x, --y, ++i, num, 0);
		}
		else if (num == 3) {
			insert(--x, y, ++i, num, 0);
		}
	}
	else {
		if(br > 0){
			return 0;
		}
		else if (num == 1) {
			insert(--x, y-2, i, 2, ++br);
		}
		else if (num == 2) {
			insert(--x, ++y, i, 3, ++br);
		}
		else if (num == 3) {
			insert(x+2, ++y, i, 1, ++br);
		}
	}
}

