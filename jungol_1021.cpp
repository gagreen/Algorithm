#include <stdio.h>

int n, m;
int num[101][101];
int output[101];

void find(int a);

int main(){
	int i, x, y, k;
	
	scanf("%d %d", &n, &m);
	for(i=1; i<=m; i++){
		scanf("%d %d %d", &x, &y, &k);
		num[x][y] = k;
		output[x] = -1;
	}
	
	find(n);
	
	for(i=1; i<=100; i++){
		if(output[i] != -1 && output[i] != 0){
			printf("%d %d\n", i, output[i]);
		}
	}
	return 0;
}

void find(int a){
	int i, j;
	
	if(output[a] != -1){
		output[a]++;
	}
	else{
		for(i=1; i<=n; i++){
			if(num[a][i] != 0){
				for(j=1; j<=num[a][i]; j++){
					find(i);
				}
			}
		}
	}
}
