#include <stdio.h>
#include <math.h>

/* \에라토스테네스의 체*/
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
	int n;
	int i, count;
	bool eratos[246913] = {false};
	
	getEratos(eratos, 246913);
	
	while(true) {
		scanf("%d", &n);
		if(n == 0) {break;}  // 입력값이 0이라면 종료 
		
		count = 0; 
		for(i=n+1; i<=n*2; i++){
			if(eratos[i]) {
//				printf("%d: executed\n", i);
				count++;
			}
		}
		
		printf("%d\n", count);
	}
	
	
}
