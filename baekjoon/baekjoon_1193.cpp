#include <stdio.h>

int main() {
	int ord; // �Է°� 
	int sum = 2; // �� ���� ���� ���� ���� �� 
	int flag = 1; // i�� ���� �� 
	int i=0;
	
	
	scanf("%d", &ord);
	
	while(ord--) {
		i += flag;
				
		if(i == sum || i == 0) { // �ִ񰪱��� �Դٸ� 
//			printf("'met %d'", i);
			if(i == 0) {
				i = 1;
			}
			flag *= -1;
			
			sum++;
		}
		
//		printf("%d/%d\n", sum-i, i);
	}
	
	printf("%d/%d", sum-i, i);
}
