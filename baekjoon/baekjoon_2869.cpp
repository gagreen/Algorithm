#include <stdio.h>

int main() {
	int day, night, height;
	int sum=0, count=0;
	
	scanf("%d %d %d", &day, &night, &height);
	
//	while(true) {
//		count++; // �Ϸ簡 ���� 
//		sum += day; // ���� ���� ������ 
//		
//		if(sum >= height) { // ���������� �����ߴٸ� 
//			break;
//		}
//		
//		sum -= night; // �㿡 �̲����� 
//	}

	// ���� �̲������� ���� ���� �����ؼ� (height - night)���� ������. 
	count = (height - night) / (day - night); 
	// ������ �������� ������ �Ϸ縦 �� �����Ѵ�. 
	if((height - night) % (day - night) != 0) {
		count++;
	} 
	
	printf("%d", count);
}
