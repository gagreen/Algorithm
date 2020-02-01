#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i;
	scanf("%d", &n);
	int *a = (int*)malloc(sizeof(int)*n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("%d %d %d", a[0], a[(n/2)], a[n-1]);
	free(a);
	return 0;
}
