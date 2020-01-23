#include <stdio.h>

int main(){
	int n, x=0, y=0, i=1, j, aboutX=0, aboutY=0;
	int arr[100][100] = {0,};
	
	scanf("%d", &n);
	
	while(i <= n*n) {
		
		arr[x][y] = i++;
		
		if(y <= 0){
			x++;
			if(x == n){
				x--;
				y++;
			}
			aboutX = -1;
			aboutY = 1;
			
			arr[x][y] = i++;
			
			x += aboutX;
			y += aboutY;
			continue;
		}
		else if(x <= 0){
			y++;
			if(y >= n){
				y--;
				x++;
			}
			aboutX = 1;
			aboutY = -1;
			
			arr[x][y] = i++;
			
			x += aboutX;
			y += aboutY;
			continue;
		}
		else if(y >= n-1){
			x++;
			if(x >= n){
				x--;
				y++;
			}
			aboutX = 1;
			aboutY = -1;
			
			arr[x][y] = i++;
			
			x += aboutX;
			y += aboutY;
			continue;
		}
		if(x >= n-1){
			y++;
			aboutX = -1;
			aboutY = 1;
			
			arr[x][y] = i++;
			
			x += aboutX;
			y += aboutY;
			continue;
		}
		else {
			x += aboutX;
			y += aboutY;
			continue;			
		}

	}
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
