#include <stdio.h>

int main() {
	int n, arr[1000];
	int i, j, temp;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
	
	/* �������� */
	for(i=1; i<n; i++) { // 1���� n���� �˻� 
		j = i;
		temp = arr[j];
		while (--j >=0 && temp < arr[j]) { // i���� (j�� 0���� ũ�� AND temp���� Ŭ ������) �������� �ݺ� 
			arr[j+1] = arr[j]; // �� ĭ���� �б� 
			arr[j] = temp; // �ڸ� ���� 
		}
//		for(j=0; j<n; j++) {
//			printf("%d ",arr[j]);
//		}
	}
	
	for(i=0; i<n; i++) {
		printf("%d\n",arr[i]);
	}
}
