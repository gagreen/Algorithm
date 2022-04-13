#include <stdio.h>

int ques(int *i, int *j){
	if(*i > *j){
		*i /= 2;
		*j *= 2;
	}
	else{
		*i *= 2;
		*j /= 2;
	}
}

int main(){
	int a, b;
	
	scanf("%d %d", &a, &b);
	ques(&a, &b);
	printf("%d %d", a, b);
}
