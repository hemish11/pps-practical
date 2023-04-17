#include <stdio.h>

void main() {
	int num, i, ans;
	
	printf("Enter number: ");
	scanf("%d", &num);
	
	for (i = 1; i <= num; i++) {
		ans *= i;
	}
	
	printf("Factorial is: %d", ans);
}
