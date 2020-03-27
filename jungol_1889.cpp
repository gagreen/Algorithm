#include <stdio.h>
#include <stdlib.h>

int N;
int q[13] = {0, };
int sum = 0;

void nQueen(int q[], int n, int row);
int queenPromising(int q[], int n, int row);

int main(){
	scanf("%d", &N);
	
	nQueen(q, N, 0);
	printf("%d", sum);
	
	return 0;
}

void nQueen(int q[], int n, int row){
	int i;
	
	for(i=0; i<n; i++){
		q[row] = i;
		if(queenPromising(q, n, row)){
			if(row == n-1){
				sum++;
			}
			else{
				nQueen(q, n, row+1);
			}
		}
	}
}

int queenPromising(int q[], int n, int row){
	if(row < 1){
		return 1;
	}
	int i;
	
	for(i=0; i<row; i++){
		if(q[row] == q[i] || row-i == abs(q[row]-q[i])){
			return 0;
		}
	}
	return 1;
}
