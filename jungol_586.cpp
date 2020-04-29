#include <stdio.h>
#include <math.h>

void macro(int a, int b){
	printf("(%d - %d) ^ 2 = %d\n", a, b, (int)pow(a-b, 2));
	printf("(%d + %d) ^ 3 = %d\n", a, b, (int)pow(a+b, 3));
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	
	macro(a, b);
	
	return 0;
}
