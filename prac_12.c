#include <stdio.h>

int main () {
	float marks;
	
	printf("Enter marks: ");
	scanf(" %f", &marks);
	
	if (marks >= 80) {
		printf("Distinction");
		return 0;
	}
	
	if (marks >= 60) {
		printf("First class");
		return 0;
	}
	
	if (marks >= 40) {
		printf("Second class");
		return 0;
	}
	
	printf("fail");
	return 0;
}
