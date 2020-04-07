#include <stdio.h>

double getArea(int r){
	return 3.14 * r * r;
}

int main(){
	int input;
	double output;
	
	scanf("%d", &input);
	output = getArea(input);
	printf("%.2lf", output);
	
	return 0;
}
