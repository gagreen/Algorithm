#include<stdio.h>

int main() {
	int a, b, c;
	int i, count = 0;;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if(b >= c) { // ���ͺ��� ���� ����� ���ų� ���� �� 
		printf("-1");
		return 0;
	}
	
	// (c - b): ���� ���� 
	
	count = (a / (c - b)) + 1;
	
	printf("%d", count);
	
	return 0;
}
