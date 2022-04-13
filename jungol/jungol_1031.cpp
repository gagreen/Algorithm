#include <stdio.h>

void findNumber(int x, int y);
int checkBingo();
void printBoard();

int board[5][5], check[5][5]={0,}, call[5][5];

int main(){
	int i, j, turn;
	
	for(i=0; i<5; i++){ // ������ �Է� 
		for(j=0; j<5; j++){
			scanf("%d", &board[i][j]);
		}
	}
	for(i=0; i<5; i++){ // ��ȸ�� �Է� 
		for(j=0; j<5; j++){ 
			scanf("%d", &call[i][j]);
		}
	}
	// ----- �Է� �� -----
	
	
	turn = 0; 
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			findNumber(i, j); // ���ڸ� ã�Ƽ� check ���� 
			turn++;
//			printBoard();
			
			if(checkBingo() >= 3){ // �������� Ȯ�� 
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
	
	for(i=0; i<5; i++){ // ���� 
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
//			printf("����");
			bingo++;
		}
	}
	for(i=0; i<5; i++){ // ���� 
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
//			printf("����"); 
			bingo++;
		}
	}
	
	cnt = 0;
	for(i=0; i<5; i++){ // �밢 ���� 
		if(check[i][i] == 1){
			cnt++;
		}
		else{
			break;
		}
	}
	if(cnt == 5){
//		printf("�밢 ����") ;
		bingo++;
	}
	
	cnt = 0;
	for(i=0; i<5; i++){ // �밢 ������ 
		if(check[i][5-1-i] == 1){
			cnt++;
		}
		else{
			break;
		}
	}
	if(cnt == 5){
//		printf("�밢 ������");
		bingo++;
	}
	
//	printf("\n����: %d\n", bingo);
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
