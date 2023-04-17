#include <stdio.h>

void main () {
	float c, f;
	
	printf("Enter Temperature in C: ");
	scanf(" %f", &c);
	
	f = (c * 1.8) + 32;
	
	printf("\nFahrenheit: %.2f", f);
}
