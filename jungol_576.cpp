#include <stdio.h>

int calc(int a, int b, char op){
	if(op == '+'){
		return a+b;
	}
	else if(op == '-'){
		return a-b;
	}
	else if(op == '*'){
		return a*b;
	}
	else if(op == '/'){
		return a/b;
	}
	else{
		return 0;
	}
}

int main(){
	int a, b;
	char op;
	
	scanf("%d %c %d", &a, &op, &b);
	printf("%d %c %d = %d", a, op, b, calc(a, b, op));
	
	return 0;
}
