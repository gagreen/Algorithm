#include <stdio.h>
#include <string.h>

int binToDec(char a[], int len);

int main(){
	char n[31];
	int output;
	scanf("%s", n);
	output = binToDec(n, strlen(n));
	printf("%d", output);
}

int binToDec(char a[], int len){
	if(len == 0){
		return 0;
	}
	return binToDec(a, len-1) * 2 + a[len-1] - '0';
}
