#include <stdio.h>

int makeNew(int num) {
	int first, second;
	first = (num%10);
	second = ((num/10) + (num%10));
	
	if(second >= 10) { // �ι�° ���ڰ� 10�� �Ѵ´ٸ� 
		second = second%10; // ���� �ڸ��� ���ϱ� 
	}
//	printf("%d %d\n", first, second);
	return first*10 + second;
}

int main() {
	int n;
	int count=1, result = -1; // N�� -1�� �Էµ� ���� �����Ƿ� �⺻���� -1�� 
	
	scanf("%d", &n);
	result = makeNew(n);
	
	while(result != n) { // �Է°��� ������� �� ������ 
		result = makeNew(result);
		count++; 
	}
	
	printf("%d", count);
}
