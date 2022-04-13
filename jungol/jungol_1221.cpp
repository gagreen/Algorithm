#include <stdio.h>

int stack[11];
int top = -1;
void push(int item);
int pop();

int main(){
	char data;
	int n, i, st, nd;
	
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf(" %c", &data);
		
		if(data >= '0' && data <= '9'){ // 피연산자라면
			push(data - '0');
		}
		else{
			switch (data){
				case '+':
					nd = pop();
					st = pop();
					push(st + nd);
					break;
				case '-':
					nd = pop();
					st = pop();
					push(st - nd);
					break;
				case '*':
					nd = pop();
					st = pop();
					push(st * nd);
					break;
				case '/':
					nd = pop();
					st = pop();
					push(st / nd);
					break;
			}
		}
	}
	
	printf("%d", pop());
	
}
void push(int item){
	stack[++top] = item;
}
int pop(){
	return stack[top--];
}
