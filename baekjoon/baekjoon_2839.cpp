#include<stdio.h>

int main() {
	int weight;
	int count = 0;
	
	scanf("%d", &weight);
	
	/* 3kg�� ���鼭 5kg�� ���� �� �ִ°��� Ȯ�� */
	while(weight > 0) {
		
		if(weight % 5 == 0) { // ���԰� 5�� ����� �ٷ� break �� ������ 
			count += weight/5;
			break;
		}
		else if(weight < 3) { // 3kg���� �۴ٸ� �Ұ����� 
			count = -1; // �Ұ��� ǥ�� 
			break;
		}
		
		weight -= 3;
		count++;
	}
	
	printf("%d", count);
	
	return 0;
}
