#include <stdio.h>

int main () {
	char a;
	
	printf("Enter Character: ");
	scanf(" %c", &a);
	
	if (a >= '0' && a <= '9') {
		printf("Given character is number");	
		return 0;
	}
	
	if (a >= 'a' && a <= 'z') {
		printf("Given character is in lowercase");	
		return 0;
	}

	if (a >= 'A' && a <= 'Z') {
		printf("Given character is in uppercase");	
		return 0;
	}
	
	return 0;
}
