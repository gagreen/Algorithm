#include <stdio.h>

int main() {
	char str[101];
	int pos;
	int alpabet[26], i;
	
	scanf("%s", str);
	for(i=0; i<26; i++) { alpabet[i] = -1; } // 0 �̿��� �ʱ�ȭ ��� 
	
	for(i=0; str[i] != NULL; i++) { //���ڿ��� ������ NULL�� ���� ���� �̿� 
		int tmp = str[i] - 'a';
		if(alpabet[tmp] == -1) {
			alpabet[tmp] = i;
		}
	}
	
	for(i=0; i<26; i++) {
		printf("%d ", alpabet[i]);
	}
}
