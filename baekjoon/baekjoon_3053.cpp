#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main() {
	int r;
	double euclide, taxi;
	
	scanf("%d", &r);
	
	euclide = M_PI * r * r;
	taxi = 2.0 * r * r;
	
	printf("%lf\n%lf", euclide, taxi);
}
