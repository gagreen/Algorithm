#include <stdio.h>

int main(){
	int i;
	long long int n;
	double output=2;
	scanf("%lld", &n);
	
	for(i=0; i<100; i++){ // �ٺ��δϾ� ��� 
		output = (output + n/output) / 2;
	}
	
	printf("%lld", (long long int)output);
	return 0;
}
