#include <stdio.h>
#include <math.h>

/* 1���� end���� �����佺�׳׽��� ü ����� �Լ� */
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
