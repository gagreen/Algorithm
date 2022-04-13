#include <stdio.h>
#include <math.h>

// size 크기의 원반들을 from(현재 위치)에서 by(경유지)를 거쳐 to로 이동 
void hanoi(int size, int from, int by, int to) {
	if(size == 1) {
		printf("%d %d\n", from, to);
		return;
	}
	
	hanoi(size-1, from, to, by); // 경유지에 작은 탑 만들어 놓기 
	printf("%d %d\n", from, to); // 가장 큰 원반 옮기기 
	hanoi(size-1, by, from, to); // 경유지에 쌓아놓은 탑 옮기기 
	
	return;
}

int main() {
	int size;
	int count;
	
	scanf("%d", &size);
	
	count = pow(2, size) - 1; // 이동 개수(정의인듯) 
	printf("%d\n", count);
	hanoi(size, 1, 2, 3);
	
	return 0;
}
