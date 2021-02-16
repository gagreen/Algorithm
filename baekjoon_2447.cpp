#include <stdio.h>

char square[6562][6562];

void initSquare(int n) { // 주어진 길이만큼 공백으로 초기화 
	int i, j;
	
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			square[i][j] = ' ';
		}
	}
}

void drawSquare(int row, int col) {
	int i, j;
	
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			
			if(!(i == 1 && j ==1)) {
				square[row + i][col + j] = '*';
			}
		}
	}
	
	return;
}

void stars(int n, int row, int col) {
	if(n == 3) {
		drawSquare(row, col);
		return;
	}
	
	int nextN = n/3;	
	
	stars(nextN, row, col);
	stars(nextN, row, col + nextN);
	stars(nextN, row, col + 2*nextN);
	stars(nextN, row + nextN, col);
	// 가운데 빈 칸 
	stars(nextN, row + nextN, col + 2*nextN);
	stars(nextN, row + 2*nextN, col);
	stars(nextN, row + 2*nextN, col + nextN);
	stars(nextN, row + 2*nextN, col + 2*nextN);
	
	return;
}

void printSquare(int n) {
	int i, j;
	
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			printf("%c", square[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int n;
	
	scanf("%d", &n); // 사각형의 변 입력
	
	initSquare(n);
	
	stars(n, 0, 0);
	
	printSquare(n);
	
	return 0;
}
