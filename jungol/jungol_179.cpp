#include <stdio.h>
#include <math.h>

void getAvg(double a, double b, double c){
	double sum = 0;
	
	sum = a + b + c;
	printf("%d\n", (int)round(sum/3));
	
	sum = round(a) + round(b) + round(c);
	printf("%d\n", (int)round(sum/3));
	
}

int main(){
	double a, b, c;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	getAvg(a, b, c);
	
	return 0;
}
