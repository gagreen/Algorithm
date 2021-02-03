#include <stdio.h>

int main() {
	int myX, myY, rectW, rectH;
	int distX, distY, minDist;
	
	scanf("%d %d %d %d", &myX, &myY, &rectW, &rectH);
	
	distX = rectW - myX;
	distY = rectH - myY; // 종점까지의 거리
	 
	distX = distX < myX ? distX : myX;
	distY = distY < myY ? distY : myY;
	
	minDist = distX < distY ? distX : distY;
	
	printf("%d", minDist);
}
