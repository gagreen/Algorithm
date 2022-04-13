#include <stdio.h>

int main() {
	int a, b, c, data, i;
	int output[10] = {0, };
	
	scanf("%d\n%d\n%d", &a, &b, &c);
	data = a*b*c;
	
	while (data != 0) {
		output[data%10]++;
		data /= 10;
	}
	
	for(i=0; i<10; i++){
		printf("%d\n", output[i]);
	}
	
	return 0;
}
