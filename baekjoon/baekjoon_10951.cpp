#include <stdio.h>

int main() {
	int a, b;
	
	// EOF: End Of File, ������ ���� �������� ���� ��ȯ�� 
	while(scanf("%d %d", &a, &b) != EOF) { 
		printf("%d\n", a+b);
	}
}