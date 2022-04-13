#include <stdio.h>
#include <stdlib.h>

int arr[1000] = {0, };
int idx = 0;

int need(int width){ // 폭이 width일떄,  종이의 수 반환 
	int pos, prev = -1; // 현재 위치, 전의 위치 
	int ret = 0; // 종이의 수 
	
	for(pos=0; pos<idx; pos++){  // 요소의 개수만큼 반복 
		if(prev == -1){
			prev = arr[pos];
			ret++;
		}
		else if(prev + width <= arr[pos]){
			prev = arr[pos];
			ret++;
		}
	}
	
	return ret;
}

int compare (const void *first, const void *second) // qsort 사용을 위함 
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else 
        return 0;
}

int main(){
	int row, col, paper, er, i, x, y;
	int l, r, m;
	int max_height = 0;
	
	scanf("%d %d", &row, &col);
	scanf("%d", &paper);
	scanf("%d", &er);
	
	for(i=0; i<er; i++){
		scanf("%d %d", &x, &y);
		if(max_height < x){
			max_height = x;
		}
		arr[idx++] = y;
	}
	//End of input
	qsort(arr, idx, sizeof(int), compare); // 정렬 
	
	l = max_height;
	r = 1000000;
	while(l < r){ // 이진 탐색 
		m = (l + r) / 2;
		if(need(m) <= paper){ // 가능한 경우 
			r = m;
		}
		else{
			l = m+1;
		}
	}
	
	printf("%d", l); 
	
	return 0;
}
