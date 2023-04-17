#include <stdio.h>

void main () {
	float km, m, cm, inch, feet;
	
	printf("Enter Kilometers: ");
	scanf(" %f", &km);
	
	m = km * 1000;
	cm = m * 100;
	
	feet = m *  3.281;
	inch = feet * 12;
	
	printf("\nMeter: %.2f", m);
	printf("\nCentimeter: %.2f", cm);
	printf("\nFeet: %.2f", feet);
	printf("\nInch: %.2f", inch);
}
