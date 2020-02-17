#include <stdio.h>

int main(){
	int d, k, i, j, tmp;
	int rankA=1, rankB=1;
	scanf("%d %d", &d, &k);
	
	for(i=3; i<d; i++){
		tmp = rankB;
		rankB = rankA + rankB;
		rankA = tmp;
	}

	for(i=1; i<=k/2; i++){
		for(j=1; j<=k; j++){
			if(k == rankA*i + rankB*j){
				break;
			}
		}
		if(k == rankA*i + rankB*j){
			printf("%d %d ", i, j);
			break;
		}
	}
	
	return 0;
}
