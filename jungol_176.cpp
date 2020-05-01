#include <stdio.h>
#include <math.h>

int betweenSqrt(double a, double b){
	int num = 0;
	
	if(a > b){
		double tmp = a;
		a = b;
		b = tmp;
	}
	
	if((int)sqrt(a) == sqrt(a)){
		a = sqrt(a)-1;
	}
	else{
		a = sqrt(a);
	}
	b = (int)sqrt(b);
	
	for(; a<b; a++){
		num++;
	}
	
	return num;
}

int main(){
	double a, b;
	
	scanf("%lf %lf", &a, &b);
	printf("%d", betweenSqrt(a, b));
	
	return 0;
}
