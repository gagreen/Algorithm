#include <stdio.h>

int main() {
	int n;
	int i;
	
	scanf("%d", &n);
	
	for(i=2; i<=n; i++) { // �����佺�׳׽��� ü�� ���� 
		
		while(n%i == 0) { // ���� �� ������ŭ ������ 
			n /= i;  
			printf("%d\n", i);
		}
	}
}
