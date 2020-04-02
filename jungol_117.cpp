#include <stdio.h>

int main(){
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	
	printf("sum %d\n", (int)a+(int)b+(int)c);
	printf("avg %d", (int)(a+b+c)/3);
	
	return 0;
}
