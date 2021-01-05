#include <stdio.h>

int main() {
	int a, b;
	
	// EOF: End Of File, 파일의 끝에 도달했을 때의 반환값 
	while(scanf("%d %d", &a, &b) != EOF) { 
		printf("%d\n", a+b);
	}
}
