#include <stdio.h>
#include <stdlib.h>

int n, idx=0;
int **arr;
char output[1024];

void paper(int hLow, int hHigh, int wLow, int wHigh);
int check(int hLow, int hHigh, int wLow, int wHigh);


int main(){
	int i, j;
	scanf("%d", &n);
	arr = (int**) malloc(sizeof(int*) * n);
	for(i=0; i<n; i++){
		arr[i] = (int*) malloc(sizeof(int) * n);
		for(j=0; j<n; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	
	paper(0, n-1, 0, n-1);
	
	printf("%s", output);
	
	for(i=0; i<n; i++){
		free(arr[i]);
	}
	free(arr);
	return 0;
}

void paper(int hLow, int hHigh, int wLow, int wHigh){
	if(check(hLow, hHigh, wLow, wHigh)){
		output[idx++] = 'X';
		int hMid = (hLow + hHigh) / 2;
		int wMid = (wLow + wHigh) / 2;
		paper(hLow, hMid, wLow, wMid);
		paper(hLow, hMid, wMid+1, wHigh);
		paper(hMid+1, hHigh, wLow, wMid);
		paper(hMid+1, hHigh, wMid+1, wHigh);
	}
	else{
		output[idx++] = arr[hLow][wLow]+48;
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
