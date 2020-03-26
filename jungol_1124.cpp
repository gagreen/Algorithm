#include <stdio.h>

int n;
int board[101][101] = {0,};

void fill(int x, int y);
int search();
int cal(int x1, int x2, int y1, int y2);

int main(){
	int i, x, y;
	
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d %d", &x, &y);
		fill(x, y);
	}
	// end of input
	
	printf("%d", search());
	
	return 0;
}

void fill(int x, int y){
	int i, j;
	for(i=x; i<x+10; i++){
		for(j=y; j<y+10; j++){
			board[i][j] = 1;
		}
	}
}

int search(){
	int x1, x2, y1, y2, max=100, sum;
	
	for(x1=0; x1<90; x1++){
		for(y1=0; y1<90; y1++){
			if(board[x1][y1] == 1){
				
				for(x2=x1; x2<100; x2++){
					for(y2=y1; y2<100; y2++){
						if(board[x2][y2] == 1){
							
							if((x2-x1+1)*(y2-y1+1)<=max){ // 계산 최소화를 위해 
								continue;
							}
							sum = cal(x1, x2, y1, y2);
							if(sum > max){
								max = sum;
							}
						}
					}
				}
			}
		}
	}
	return max;
}

int cal(int x1, int x2, int y1, int y2){
	int i, j, sum=0;
	
	for(i=x1; i<=x2; i++){
		for(j=y1; j<=y2; j++){
			if(board[i][j] == 0){ // 사각형이 끊겼다면 stop 
				return 0;
			}
			sum++;
		}
	}
	return sum;
}
