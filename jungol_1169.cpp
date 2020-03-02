#include <stdio.h>

int num[5] = {0,};

void dice1(int n, int a);
void dice2(int n, int a);
void dice3(int n, int a);

int main(){
	int n, m;
	
	scanf("%d %d", &n, &m);
	
	switch(m){
		case 1:
			dice1(n, 0);
			break;
		case 2:
			dice2(n, 0);
			break;
		case 3:
			dice3(n, 0);
			break;
	}
	
	return 0;
}

void dice1(int n, int a){
	int i, j;
	
	for(i=1; i<=6; i++){
//		printf("num[%d] = %d\n", a, i);
		num[a] = i;
		
		if(a < n-1){
			dice1(n, a+1);
		}
		else{
			for(j=0; j<n; j++){
				printf("%d ", num[j]);
			}
			printf("\n");
		}
	}
	return;
}

void dice2(int n, int a){
	int i, j;
	
	for(i=1; i<=6; i++){
		if(num[a-1] <= i){
			num[a] = i;
			
			if(a < n-1){
				dice2(n, a+1);
			}
			else{
				for(j=0; j<n; j++){
					printf("%d ", num[j]);
				}
				printf("\n");
			}
		}
	}
	return;
}

void dice3(int n, int a){
	int i, j, check;
	
	for(i=1; i<=6; i++){
		check = 0;
		for(j=0; j<a; j++){
			if(num[j] == i){
				check = 1;
				break;
			}
		}
		
		if(check == 0){
			num[a] = i;
			
			if(a < n-1){
				dice3(n, a+1);
			}
			else{
				for(j=0; j<n; j++){
					printf("%d ", num[j]);
				}
				printf("\n");
			}
		}
	}
	
	return;
}
