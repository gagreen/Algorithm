#include <stdio.h>

void f(){
	printf("~!@#$^&*()_+|\n");
}

int main(){
	int a, i;
	scanf("%d", &a);
	for(i=0; i<a; i++){
		f();	
	}
	
	return 0;
}
