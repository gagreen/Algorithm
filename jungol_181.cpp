#include <stdio.h>
#define PI 3.141592

double getArea(double radius){
	return PI * radius * radius;
}

int main(){
	double r;
	
	printf("radius : ");
	scanf("%lf", &r);
	printf("area = %.3lf", getArea(r));
	
	return 0;
}
