#include <stdio.h>

void display(int);

int main() {
	
	int marks[5];
	
	int i;
	
	for (i = 0; i < 5; i++) {
		printf("Enter mark student %d: ", i+1);
		scanf("%d", &marks[i]);
		display(marks[i]);
	}
	
	return 0;
}

void display(int m) {
	if (m >= 50) printf("Passed\n\n");
	else printf("Failed\n\n");
}