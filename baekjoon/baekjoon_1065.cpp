#include <stdio.h>

bool isHansu(int num) { // 주어진 수가 한수인지? 아닌지? 
	if(num < 100) { // 두자리 수는 모두 한수이다.(비교대상이 하나이기 때문) 
		return true;
	}
	if(num == 1000) { // 1000은 한수가 아니다.(세자리수로 일반화를 위한 구문) 
		return false;
	}
	
	int digits[3], i;
	
//	printf("%d: \t", num);
	
	for(i=0; i<3; i++) { // 각 자릿수를 배열에 담는 반복문 
		digits[i] = num%10;
//		printf("%d ", digits[i]);
		num /= 10;
	} 
//	printf("\n");
	
	if(digits[1] - digits[0] == digits[2] - digits[1]) { // (세자릿수)등차수열인가? 
		return true;
	} else {
		return false;
	}
}

int countHansu(int x){ // 1~x까지 한수를 계수 
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
