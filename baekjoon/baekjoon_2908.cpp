#include <stdio.h>

int forDigit(int th) { // th번째 자릿수만큼 곱해주는 함수 
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
		changedFir += (fir[i] - '0') * forDigit(i); // 문자열이므로 '0'을 빼주고 
		changedSec += (sec[i] - '0') * forDigit(i); // 자릿수 곱하기 
	}
	
//	printf("\n%d %d\n", changedFir, changedSec);
	
	output = changedFir > changedSec ? changedFir : changedSec; // 큰 값 넣기
	printf("%d", output); 
	
}
