#include <stdio.h>
#include <stdlib.h>

int arr[1000] = {0, };
int idx = 0;

int need(int width){ // ���� width�ϋ�,  ������ �� ��ȯ 
	int pos, prev = -1; // ���� ��ġ, ���� ��ġ 
	int ret = 0; // ������ �� 
	
	for(pos=0; pos<idx; pos++){  // ����� ������ŭ �ݺ� 
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

int compare (const void *first, const void *second) // qsort ����� ���� 
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
	qsort(arr, idx, sizeof(int), compare); // ���� 
	
	l = max_height;
	r = 1000000;
	while(l < r){ // ���� Ž�� 
		m = (l + r) / 2;
		if(need(m) <= paper){ // ������ ��� 
			r = m;
		}
		else{
			l = m+1;
		}
	}
	
	printf("%d", l); 
	
	return 0;
}
