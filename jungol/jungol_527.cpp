#include <stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d %.2lf", a/b, ((double)a)/b);
}
