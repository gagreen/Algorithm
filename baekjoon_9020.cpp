#include<stdio.h>
#include<math.h>

/* 에라토스테네스의 체*/
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
	int testCase, n;
	bool eratos[10001] = {false};
	int small, big;
	
	getEratos(eratos, 10000);
	
	scanf("%d", &testCase);
	
	while(testCase--) {
		scanf("%d", &n);
	
		for(big=small=n/2;small>0; small--, big++){
//			printf("%d %d\n", small, big);
			if(eratos[small] && eratos[big]) {
				printf("%d %d\n", small, big);
				break;
			}
		}
	}
}
