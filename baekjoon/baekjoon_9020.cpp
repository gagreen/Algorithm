#include<stdio.h>
#include<math.h>

/* �����佺�׳׽��� ü*/
void getEratos(bool *eratos, int end) { 
	int i, j;
	
	// ���� ���ظ� ���� one-base�� �ۼ��Ѵ�. 
	// 2���� end������ true�� �ʱ�ȭ
	for(i=2; i<=end; i++) { eratos[i] = true; }
		
	for(i=2; i<=sqrt(end); i++) { // 2���� end�� ������(�ִ� ����� ���� �� �ִ� ����) 
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
