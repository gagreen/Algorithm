#include <stdio.h>

int forDigit(int th) { // th��° �ڸ�����ŭ �����ִ� �Լ� 
	int output = 1, i; 
	for(i=0; i<th; i++) {
		output *= 10;
	}
	
	return output;
}

int main() {
	char fir[4], sec[4];
	int changedFir=0, changedSec=0;
	int output, i;
	
	scanf("%s %s", fir, sec);
	
	for(i=3-1; i>=0; i--) {
//		printf("%d: %d\n", i, forDigit(i));
		changedFir += (fir[i] - '0') * forDigit(i); // ���ڿ��̹Ƿ� '0'�� ���ְ� 
		changedSec += (sec[i] - '0') * forDigit(i); // �ڸ��� ���ϱ� 
	}
	
//	printf("\n%d %d\n", changedFir, changedSec);
	
	output = changedFir > changedSec ? changedFir : changedSec; // ū �� �ֱ�
	printf("%d", output); 
	
}
