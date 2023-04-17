#include <stdio.h>

void main () {
	float b, h, area;
	
	printf("Enter Base: ");
	scanf(" %f", &b);
	printf("Enter Height: ");
	scanf(" %f", &h);
	
	area = 0.5 * b * h;
	
	printf("\nArea of the triangle is: %.2f", area);
}
