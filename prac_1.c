#include <stdio.h>

void main () {
	float a, b, sum, diff, prod, div;

	printf("Enter first number: ");
	scanf(" %f", &a);
	printf("Enter second number: ");
	scanf(" %f", &b);
	
	sum = a + b;
	diff = a - b;
	prod = a * b;
	div = a / b;
	
	printf("\nSum: %.2f", sum);
	printf("\nDifference: %.2f", diff);
	printf("\nProduct: %.2f", prod);	
	printf("\nDivision: %.2f", div);
}
