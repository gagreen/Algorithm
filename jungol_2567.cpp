#include <stdio.h>

int n, p, cnt=0;
int num[100] = {0,};
int visit[100] = {0,};

void cntNode(int _n);

int main(){
	scanf("%d %d", &n, &p);
	
	cntNode(n);
	
	printf("%d", cnt);
	return 0;
}

void cntNode(int _n){
	int tmp = (_n * n) % p;
	
	if(visit[tmp] == 0 && _n != 0){
		visit[_n] = 1;
		cntNode(tmp);
		cnt++;
	}
	if(tmp == n){
		cnt++;
	}
	
	return;
}
