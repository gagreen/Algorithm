#include <stdio.h>

int main() {
	int testCase;
	char grade[81];
	int i, count, score;
	
	scanf("%d", &testCase);
	
	while(testCase--) {
		scanf("%s", grade); // ���ڿ� �Է� 

		score = 0;
		count = 0; // ���� �ʱ�ȭ 
		
		for(i=0; grade[i] != 0; i++) {
			if(grade[i] == 'O'){
				score += ++count; // count�� ���� �ø��� ������ �ֱ� 
			} 
			else if(grade[i] == 'X') {
				count = 0; // ���� �ʱ�ȭ 
			}
		}
		
		printf("%d\n", score); 
	}
}
