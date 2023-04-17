#include <stdio.h>

void main () {
	int number;
	
	printf("Enter Number: ");
	scanf("%d", &number);
	
	if (number % 2 == 0) {
		printf("Number is Even");
	} else {
		printf("Number is Odd");
	}
}
