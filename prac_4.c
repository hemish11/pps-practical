#include <stdio.h>

void main () {
	int a, b;
	
	printf("Enter number 1: ");
	scanf(" %d", &a);
	printf("Enter number 2: ");
	scanf(" %d", &b);
	
	a = a + b;
	b = a - b;
	a = a - b; 
	
	printf("\nNumber 1: %d", a);
	printf("\nNumber 2: %d", b);
}
