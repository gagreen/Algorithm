#include <stdio.h>

int N;
int min = 100 * 12;
int res;
int arr[12][12] = {0,};
int visited[12] = {0,};

void moving(int row, int n);

int main(){
	int i, j;

	
	scanf("%d", &N);
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	// end of input
	
	moving(1, 0);
	
	printf("%d", min);
	return 0;
}

void moving(int row, int n){
	if(row > N && n==0){
		if(res < min){
			min = res;
		}
		return;
	}
	
	int i = (row == N) ? 0 : 1;
	for(; i<N; i++){
		if(visited[i] == 0 && arr[n][i] != 0){ // 방문한 적이 없고, 방문 가능할 때
			visited[i]  = 1;
			res += arr[n][i];
			if(res < min){
				moving(row+1, i);
			}
			res -= arr[n][i];
			visited[i] = 0;
		}
	}
}
