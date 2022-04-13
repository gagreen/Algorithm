#include <stdio.h>

int num[7] = {0,};

void sumDice(int n, int m, int a);

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	
	sumDice(n, m, 0);
	
	return 0;
}

void sumDice(int n, int m, int a){
	int i, j, sum;
	for(i=1; i<=6; i++){
		sum = 0;
		num[a] = i;
		for(j=0; j<=a; j++){
			sum += num[j];
		}
		
		if(m == sum && (a+1)== n){ // 합이 맞으면 
			for(j=0; j<n; j++){
				printf("%d ", num[j]);
			}
			printf("\n");
		}
		else if(sum<m && (a+1)<n){
			sumDice(n, m, a+1);
		}
	}
}
