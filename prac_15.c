#include <stdio.h>

void main () {
	int max, min;
	int i;
	
	for (i = 0; i < 10; i++) {
		int num;
		
		printf("Enter number %d: ", i + 1);
		scanf("%d", &num);
		
		
		if (i == 0) {
			max = num;
			min = num;
		} else {
			
			if (num >= max) max = num;
			if (num <= min) min = num;
		}
	}
	

	printf("Maximum: %d\n", max);
	printf("Minimum: %d\n", min);
}
