#include <stdio.h>

int mul0To1(int dan, int num) {
	if(num == 0 || dan == 0) {
		return 1;
	}
	return dan * num;
}

int main() {
	int n;
	int count=0;
	
	scanf("%d", &n);
	
	while(n > 0) {
		n -= mul0To1(6, count++); // 6�� �����ŭ ������ Ŀ����. 
		
//		printf("n: %d\tcount: %d\n", n, count-1);
	}
	
	printf("%d", count); 
}
