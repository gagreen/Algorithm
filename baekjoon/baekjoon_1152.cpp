#include <stdio.h>

int main() {
	char str[1000001];
	int i, count = 0;
	bool space = true; // ���� ���ڰ� �������� (ù ���ڴ� ������ ���ߵǱ� ������ true�� �ʱ�ȭ) 
	
	scanf("%[^\n]s", str); // fgets(str, 1000000, stdin); �ȵǳ� 
	
	for(i=0; str[i] != NULL; i++) {
		if(str[i] == ' ') { 
			space = true;
		}
		else if(space) { // ������ �����̶�� 
			space = false; // false��  
			count++; // �ܾ� ���� 
		}
	}
	
	printf("%d", count);
}
