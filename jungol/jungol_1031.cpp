#include <stdio.h>

void findNumber(int x, int y);
int checkBingo();
void printBoard();

int board[5][5], check[5][5]={0,}, call[5][5];

int main(){
	int i, j, turn;
	
	for(i=0; i<5; i++){ // 빙고판 입력 
		for(j=0; j<5; j++){
			scanf("%d", &board[i][j]);
		}
	}
	for(i=0; i<5; i++){ // 사회자 입력 
		for(j=0; j<5; j++){ 
			scanf("%d", &call[i][j]);
		}
	}
	// ----- 입력 끝 -----
	
	
	turn = 0; 
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			findNumber(i, j); // 숫자를 찾아서 check 변경 
			turn++;
//			printBoard();
			
			if(checkBingo() >= 3){ // 빙고인지 확인 
//				printBoard();
				break;
			}
		}
		
		if(checkBingo() >= 3){
			break;
		}
	}
	
	printf("%d", turn);
	return 0;
}

void findNumber(int x, int y){
	int i, j;
	
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			if(board[i][j] == call[x][y]){
				check[i][j] = 1;
				return;
			}
		}
	}
}

int checkBingo(){
	int i, j, cnt, bingo=0;
	
	for(i=0; i<5; i++){ // 가로 
		cnt = 0;
		for(j=0; j<5; j++){
			if(check[i][j] == 1){
				cnt++;
			}
			else{
				break;
			}
		}
		if(cnt == 5){
//			printf("가로");
			bingo++;
		}
	}
	for(i=0; i<5; i++){ // 세로 
		cnt = 0;
		for(j=0; j<5; j++){
			if(check[j][i] == 1){
				cnt++;
			}
			else{
				break;
			}
		}
		if(cnt == 5){
//			printf("세로"); 
			bingo++;
		}
	}
	
	cnt = 0;
	for(i=0; i<5; i++){ // 대각 왼쪽 
		if(check[i][i] == 1){
			cnt++;
		}
		else{
			break;
		}
	}
	if(cnt == 5){
//		printf("대각 왼쪽") ;
		bingo++;
	}
	
	cnt = 0;
	for(i=0; i<5; i++){ // 대각 오른쪽 
		if(check[i][5-1-i] == 1){
			cnt++;
		}
		else{
			break;
		}
	}
	if(cnt == 5){
//		printf("대각 오른쪽");
		bingo++;
	}
	
//	printf("\n빙고: %d\n", bingo);
	return bingo;
}

void printBoard(){
	for(int k=0; k<5; k++){
		for(int z=0; z<5; z++){
			printf("%d", check[k][z]);
		}
		printf("\n");
	}
	printf("\n");
	
	return;
}
