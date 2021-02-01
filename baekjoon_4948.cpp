#include <stdio.h>
#include <math.h>

/* \�����佺�׳׽��� ü*/
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
	int n;
	int i, count;
	bool eratos[246913] = {false};
	
	getEratos(eratos, 246913);
	
	while(true) {
		scanf("%d", &n);
		if(n == 0) {break;}  // �Է°��� 0�̶�� ���� 
		
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
