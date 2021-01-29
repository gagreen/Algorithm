#include <stdio.h>
#include <math.h>

/* 1부터 end까지 에라토스테네스의 체 만드는 함수 */
void getEratos(bool *eratos, int end) { 
	int i, j;
	
	// 쉬운 이해를 위해 one-base로 작성한다. 
	// 2부터 end까지는 true로 초기화
	for(i=2; i<=end; i++) { eratos[i] = true; }
		
	for(i=2; i<=sqrt(end); i++) { // 2부터 end의 제곱근(최대 약수가 나올 수 있는 범위) 
		if(eratos[i]) {
			for(j=i*2; j<=end; j+=i) {
				eratos[j] = false;
			}
		}
	}
	
	return;
}

int main() {
	int start, end;
	int i;
	bool eratos[1000001] = {false};
	
	scanf("%d %d", &start, &end);
	
	getEratos(eratos, end);
	
	for(i=start; i<=end; i++) {
		if(eratos[i]) {
			printf("%d\n", i);
		}
	}
}
