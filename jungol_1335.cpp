#include <stdio.h>

int n;
int arr[128][128] = {0,};
int white=0, bule=0;

void paper(int hLow, int hHigh, int wLow, int wHigh);
int check(int hLow, int hHigh, int wLow, int wHigh);


int main(){
	int i, j;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	
	paper(0, n-1, 0, n-1);
	
	printf("%d\n%d", white, bule);
	
	return 0;
}

void paper(int hLow, int hHigh, int wLow, int wHigh){
	if(check(hLow, hHigh, wLow, wHigh)){
		int hMid = (hLow + hHigh) / 2;
		int wMid = (wLow + wHigh) / 2;
		paper(hLow, hMid, wLow, wMid);
		paper(hLow, hMid, wMid+1, wHigh);
		paper(hMid+1, hHigh, wLow, wMid);
		paper(hMid+1, hHigh, wMid+1, wHigh);
	}
	else{
		if(arr[hLow][wLow] == 0){
			white++;
		}
		else{
			bule++;
		}
	}
}

int check(int hLow, int hHigh, int wLow, int wHigh){ 
	// 모두 같다면 0을, 다르다면 1을 반환 
	int i, j;
	int check = 0; 
	for(i=hLow; i<=hHigh; i++){
		for(j=wLow; j<=wHigh; j++){
			if(arr[hLow][wLow] != arr[i][j]){
				check = 1;
				break;
			}
		}
	}
	return check;
}
