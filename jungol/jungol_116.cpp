#include <stdio.h>

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	double avr = (a+b+c)/3.0;
	
	printf("%.1lf", avr);
}
