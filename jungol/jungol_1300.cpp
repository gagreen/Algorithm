#include <stdio.h>

int n, m;
int bead[300] = {0,};
int ans;

void search();
int possible(int value);

int main(){
	int i, sum=0, cnt=0;
	
	scanf("%d %d", &n, &m);
	for(i=0; i<n; i++){
		scanf("%d", &bead[i]);
	}
	
	search();
	
	for(i=0; i<n; i++){
		sum += bead[i];
		if(sum > ans){
			printf("%d ", cnt);
			sum = bead[i];
			cnt = 0;
		}
		cnt++;
	}
	printf("%d\n", cnt);
	
	return 0;
}

void search(){
	int l=0, r=n*100, m;
	
	ans = r;
	while(l <= r){
		m = (l + r) / 2;
		if(possible(m)){
			r = m - 1;
			if(m < ans){
				ans = m;
			}
		}
		else{
			l = m + 1;
		}
	}
	
	printf("%d\n", ans);
}

int possible(int value){
	int i, sum=0, cnt=1;
	
	for(i=0; i<n-1; i++){
		sum += bead[i];
		if(sum > value){
			cnt++;
			sum = bead[i];
		}
	}
	if(sum + bead[i] > value){
		cnt++;
	}
	if(cnt <= m){
		return 1;
	}
	return 0;
}
