#include <stdio.h>

int main() {
	
	int number[5], highest =0;
	int i;
	
	for (i = 0; i < 5; i++) {
		printf("Enter a number: ");
		scanf("%d", &number[i]);
	}
	
	//highest = number[0];
	for (i = 0; i < 5; i++) {
		if (number[i] > highest) {
			highest = number[i];
		}
	}
	
	printf("\nHighest number: %d", highest);
	
	return 0;
}