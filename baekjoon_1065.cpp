#include <stdio.h>

bool isHansu(int num) { // �־��� ���� �Ѽ�����? �ƴ���? 
	if(num < 100) { // ���ڸ� ���� ��� �Ѽ��̴�.(�񱳴���� �ϳ��̱� ����) 
		return true;
	}
	if(num == 1000) { // 1000�� �Ѽ��� �ƴϴ�.(���ڸ����� �Ϲ�ȭ�� ���� ����) 
		return false;
	}
	
	int digits[3], i;
	
//	printf("%d: \t", num);
	
	for(i=0; i<3; i++) { // �� �ڸ����� �迭�� ��� �ݺ��� 
		digits[i] = num%10;
//		printf("%d ", digits[i]);
		num /= 10;
	} 
//	printf("\n");
	
	if(digits[1] - digits[0] == digits[2] - digits[1]) { // (���ڸ���)���������ΰ�? 
		return true;
	} else {
		return false;
	}
}

int countHansu(int x){ // 1~x���� �Ѽ��� ��� 
	int i;
	int count=0; 
	
	for(i=1; i<=x; i++) {
		if(isHansu(i)) {
			count++;
		}
	}
	
	return count;
}

int main() {
	int n;
	
	scanf("%d", &n);
	
	printf("%d", countHansu(n));
}
