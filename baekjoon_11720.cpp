#include <stdio.h>

int main() {
	int n;
	char str[101];
	int sum = 0, i;
	
	scanf("%d", &n);
	scanf("%s", str);
	
	for(i=0; i<n; i++) {
		sum += (str[i] - '0'); // ���ڿ��̹Ƿ� '0'�� �ƽ�Ű�ڵ� ���� ���ش�. 
	}
	
	printf("%d", sum); 
}
