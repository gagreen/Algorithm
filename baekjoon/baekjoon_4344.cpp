#include <stdio.h>

int main() {
	int testCase;
	int size, scores[1000], sum, count;
	double avg;
	int i;
	
	scanf("%d", &testCase);
	
	while(testCase--) {
		scanf("%d", &size);
		sum = 0;	// ���� �ʱ�ȭ 
		count = 0;
		
		for(i=0; i<size; i++) { // �л����� ���� �ޱ� 
			scanf("%d", &scores[i]);
			sum += scores[i]; // ����� ���� �� 
		}
		avg = ((double)sum)/size; // ��� ���ϱ� 
		
		for(i=0; i<size; i++) {
			if(avg < scores[i]) { // ��պ��� ���� �л� ��� 
				count++;
			}
		}
//		printf("avg: %d\t count: %d\n", avg, count);
		printf("%.3f%%\n", ((double)count)/size*100.0); // ���� ���ϱ� 
	}
}
