#include <stdio.h>

int main () {
	float marks;
	int pass_marks = 23;
	
	printf("Enter marks: ");
	scanf(" %f", &marks);
	
	if (marks >= pass_marks) {
		printf("Student is pass");
		return 0;
	}

	printf("Student is fail");
	return 0;
}
