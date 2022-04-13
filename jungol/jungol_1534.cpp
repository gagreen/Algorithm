#include <stdio.h>

void toOther(int n, int b);

int main(){
	int n, b, output;
	scanf("%d %d", &n, &b);
	
	toOther(n, b);
	
	return 0;
}

void toOther(int n, int b){
	if(n < b){
		if(n >= 10){
			printf("%c", n + 55);
		}
		else {
			printf("%d", n);
		}
		return;
	}
	toOther(n/b, b);
	if(n%b >= 10){
		printf("%c", n%b + 55);
	}
	else {
		printf("%d", n%b);
	}
}
