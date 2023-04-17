#include <stdio.h>

void main () {
	float u, a, t, d;
	
	printf("Enter initial speed: ");
	scanf(" %f", &u);
	printf("Enter acceleration: ");
	scanf(" %f", &a);
	printf("Enter time: ");
	scanf(" %f", &t);
	
	d = u * t + 0.5 * a * t * t;
	
	printf("\nTotal distance travelled: %.2f", d);
}
