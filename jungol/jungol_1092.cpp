#include <stdio.h>

unsigned long long int pow(int x, int y){
	if (y ==  1){
		return x;
	}
    if (y == 0){
	    return 1;
	}
    

    if (y%2 == 0){
		unsigned long long int n = pow(x, y/2);
	    return n * n;
	}
    else{
    	unsigned long long int n = pow(x, (y-1)/2);
    	return x * (n * n);
	}
}

int main(){
	int x, y;
	unsigned long long int output;
	
	scanf("%d %d", &x, &y);
	
	output = pow(x, y)%20091024;
	printf("%llu", output);
	
	return 0;
}

