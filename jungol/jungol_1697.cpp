#include <stdio.h>

int main(){
	int n, i, head=0, tail=0;
	//head : 입력, tail : 출력 
	int q[101];
	char order;
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf(" %c", &order);
		if(order == 'i'){
			scanf("%d", &q[head++]);
		}
		else if(order == 'o'){
			if(!(head-tail)){
				printf("empty\n");
			}
			else{
				printf("%d\n", q[tail++]);	
			}
		}
		else if(order == 'c'){
			printf("%d\n", head-tail);
		}
	}
}
