#include <stdio.h>

int main()
{
	int i, n, k, output=1;
	scanf("%d %d", &n, &k);
	for(i=0; i<k; i++)
	{
		output *= n;
	}
	printf("%d", output);
	return 0;
}
