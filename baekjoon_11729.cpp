#include <stdio.h>
#include <math.h>

// size ũ���� ���ݵ��� from(���� ��ġ)���� by(������)�� ���� to�� �̵� 
void hanoi(int size, int from, int by, int to) {
	if(size == 1) {
		printf("%d %d\n", from, to);
		return;
	}
	
	hanoi(size-1, from, to, by); // �������� ���� ž ����� ���� 
	printf("%d %d\n", from, to); // ���� ū ���� �ű�� 
	hanoi(size-1, by, from, to); // �������� �׾Ƴ��� ž �ű�� 
	
	return;
}

int main() {
	int size;
	int count;
	
	scanf("%d", &size);
	
	count = pow(2, size) - 1; // �̵� ����(�����ε�) 
	printf("%d\n", count);
	hanoi(size, 1, 2, 3);
	
	return 0;
}
