#include <stdio.h>

int main() {
	int a, b, c;
	int nums[10] = {0,}; // Initialize: 0~9�� 0���� �ʱ�ȭ 
	int multiplied, i; // ���� �� ���� 
	
	scanf("%d %d %d", &a, &b, &c);
	
	multiplied = a * b * c;
	
	while(multiplied > 0) { // ���� ���� 0���� ũ�ٸ� 
//		printf("%d\t", multiplied%10);
		nums[multiplied%10]++; // ���� ���� ���� �ڸ� ���ϱ� 
		multiplied /= 10; // ������ 10 == ���� ���� �ڸ� ���� 
	}
//	printf("\n");
	
	for(i=0; i<10; i++) {
		printf("%d\n", nums[i]);
	}
}
