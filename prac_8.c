#include <stdio.h>

int main () {
	int num;
	
	printf("Enter number: ");
	scanf(" %d", &num);

	if (num > 0) {
		printf("Number is positive");
		return 0;
	}
		
	if (num < 0) {
		printf("Number is negative");
		return 0;
	}
	
	printf("Number is zero");
	return 0;
}
