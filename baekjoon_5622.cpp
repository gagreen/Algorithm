#include<stdio.h>
#include<string.h> 

int findNumber(char alp) { // ���ĺ��� �Է� �޾� �ش� ��ġ�� ���� ��ȯ 
	char dial[8][5] = {{'A', 'B', 'C'}, 
					 {'D', 'E', 'F'}, 
					 {'G', 'H', 'I'}, 
					 {'J', 'K', 'L'}, 
					 {'M', 'N', 'O'}, 
					 {'P', 'Q', 'R', 'S'}, 
					 {'T', 'U', 'V'}, 
					 {'W', 'X', 'Y', 'Z'}}; // ���̾��� ���ĺ� �迭 
	int i, j;
	int output; 
	
	for(i=0; i<8; i++) { //dial�� �� ũ�⸸ŭ �ݺ� 
		for(j=0; j<strlen(dial[i]); j++) {
			
			if(alp == dial[i][j]) {
				return i + 2; // ������ 2�̹Ƿ� + 2 
			}
		}
	}
	
	return -1; // ���� ���������� ���� 
}

int main() {
    char input[17];
    int sum=0, i, tmp;
    
    scanf("%s", &input);
    
    for(i=0; input[i] != NULL; i++) {
//        tmp = (input[i] - 'A') / 3;  /*
//        if(input[i] == 'Z') {         * 3�����̶�� ��Ģ���� �����Ƿ� ���� 
//        	tmp--;						*
//		}								*/

//        printf("%d\n", findNumber(input[i])); // ���̾� ����
        sum +=  findNumber(input[i]) + 1;
    }
    
    printf("%d", sum);
}
