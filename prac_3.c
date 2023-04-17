#include <stdio.h>

void main () {
	float p, r, si;
	int n;
	
	printf("Enter P: ");
	scanf(" %f", &p);
	printf("Enter R: ");
	scanf(" %f", &r);
	printf("Enter N: ");
	scanf(" %d", &n);
	
	si = p * r * n * 0.01;
	
	printf("\nSimple Interest: %.2f", si);
}
