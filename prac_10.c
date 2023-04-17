#include <stdio.h>

int main () {
	float a, b, c;
	
	printf("Enter number 1: ");
	scanf(" %f", &a);
	printf("Enter number 2: ");
	scanf(" %f", &b);
	printf("Enter number 3: ");
	scanf(" %f", &c);
	
	if (a >= b && a >= c) {
		printf("Number 1 ie %f is largest", a);	
		return 0;
	}
	
	if (b >= a && b >= c) {
		printf("Number 2 ie %f is largest", b);	
		return 0;
	}
	
	printf("Number 3 ie %f is largest", c);	
	return 0;
}
