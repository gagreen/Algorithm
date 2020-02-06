#include <stdio.h>
#include <math.h>

void toBin(int a);
int toOct(int a);
char* toHex(int a);

int main(){
	int n, b, output;
	
	scanf("%d %d", &n, &b);
	if(b == 2){
		toBin(n);
	}
	else if(b == 8){
		printf("%o", n);
	}
	else if(b == 16){
		printf("%X", n);
	}
	
	
	return 0;
}

void toBin(int a){
	if(a == 0 || a == 1){
		printf("%d", a);
		return;
	}
	toBin(a/2);
	printf("%d", a%2);
}
