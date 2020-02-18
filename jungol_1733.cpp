#include <stdio.h>

# define MAX 19

int checkWin(int x, int y);

int board[20][20] = {0,};

int main(){ // 1�� ���� ��, 2�� �� ��, 0�� ���º� 
	int i, j, winner = 0;
	
	for(i=0; i<MAX; i++){ // �Է� 
		for(j=0; j<MAX; j++){
			scanf("%d", &board[i][j]);
		}
	}
	
	for(i=0; i<MAX; i++){ //�˻� 
		for(j=0; j<MAX; j++){
			if(board[i][j] != 0){
				winner = checkWin(i, j);
				if(winner != 0){
					break;
				}
			}
		}
		if(winner != 0){
			break;
		}
	}
	
	printf("%d\n", winner);
	if(winner != 0){
		printf("%d %d", i+1, j+1);
	}
	
	return 0;
}

int checkWin(int x, int y){
	int i, cnt;
	int data = board[x][y];
	
	cnt = 0;
	for(i=0; i<5; i++){ // ���� 
		if(data != board[x+i][y]){
			break;
		}
		cnt++;
	}
	if(cnt == 5 && board[x+5][y] != data && board[x-1][y] != data){
		return data;
	}
	
	cnt = 0;
	for(i=0; i<5; i++){ // ���� 
		if(data != board[x][y+i]){
			break;
		}
		cnt++;
	}
	if(cnt == 5 && board[x][y+5] != data && board[x][y-1] != data){
		return data;
	}
	
	cnt = 0;
	for(i=0; i<5; i++){ // �밢�� �Ʒ� 
		if(data != board[x+i][y+i]){
			break;
		}
		cnt++;
	}
	if(cnt == 5 && board[x+5][y+5] != data && board[x-1][y-1] != data){
		return data;
	}
	
	cnt = 0;
	for(i=0; i<5; i++){ // �밢�� �� 
		if(data != board[x-i][y+i]){
			break;
		}
		cnt++;
	}
	if(cnt == 5 && board[x-5][y+5] != data && board[x+1][y-1] != data){
		return data;
	}
	
	
	return 0;
}
