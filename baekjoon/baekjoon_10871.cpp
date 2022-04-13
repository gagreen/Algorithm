#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, x, *a;
	int i, tmp, cnt = 0;
	
	scanf("%d %d", &n, &x);
	a = (int*) malloc(sizeof(int) * n);
	
	for(i=0; i<n; i++) {
		scanf("%d", &tmp);
		if(tmp < x) {
			a[cnt++] = tmp;
		}
	}
	
	for(i=0; i<cnt; i++) {
		printf("%d ", a[i]);
	}
}
