#include <stdio.h>

int main() {
	int x[3], y[3];
	int i, outputX, outputY;
	
	for(i=0; i<3; i++) {
		scanf("%d %d", &x[i], &y[i]);
	}
	
	/* xÃà ÁÂÇ¥ Ã£±â */
	if(x[0] == x[1]) { 
		outputX = x[2];
	} else if (x[0] == x[2]) {
		outputX = x[1];
	} else {
		outputX = x[0];
	}
	
	/* yÃà ÁÂÇ¥ Ã£±â */
	if(y[0] == y[1]) { 
		outputY = y[2];
	} else if (y[0] == y[2]) {
		outputY = y[1];
	} else {
		outputY = y[0];
	}
	
	printf("%d %d", outputX, outputY);
}
