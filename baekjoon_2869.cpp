#include <stdio.h>

int main() {
	int day, night, height;
	int sum=0, count=0;
	
	scanf("%d %d %d", &day, &night, &height);
	
//	while(true) {
//		count++; // 하루가 지남 
//		sum += day; // 낮에 나무 오르기 
//		
//		if(sum >= height) { // 목적지까지 도착했다면 
//			break;
//		}
//		
//		sum -= night; // 밤에 미끄러짐 
//	}

	// 낮에 미끌어지지 않을 것을 생각해서 (height - night)에서 나눈다. 
	count = (height - night) / (day - night); 
	// 나누어 떨어지지 않으면 하루를 더 가야한다. 
	if((height - night) % (day - night) != 0) {
		count++;
	} 
	
	printf("%d", count);
}
