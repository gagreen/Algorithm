#include <stdio.h>

int sum[10] = {0,};
int idx = 0;

void recDiceSum(int level, int goal){
	int i;
	
	for(i=1; i<=6; i++){
		sum[idx] = i;
		
		if(idx == level-1){
			int j, tot=0;
			
			for(j=0; j<=idx; j++){
				tot += sum[j];
			}
			
			if(tot == goal){
				int k;
				for(k=0; k<level; k++){
					printf("%d ", sum[k]);
				}
				printf("\n");
			}
			
		}
		else{
			idx++;
			recDiceSum(level, goal);
			idx--;
		}
	}
}


int main(){
	int n, m;
	
	scanf("%d %d", &n, &m);
	recDiceSum(n, m);
	
	return 0;
}
