#include <stdio.h>

int main() {
	int n, arr[9];
	int i, max=0, indexOfMax; // �Է°��� �ڿ����̹Ƿ� �ּ���, 0���� ũ�� 
	
	for(i=0; i<9; i++) {
		scanf("%d", &arr[i]);
		if(max < arr[i]) {
			max = arr[i];
			indexOfMax = i+1;
		}
	}
	
	printf("%d\n%d", max, indexOfMax);
}
