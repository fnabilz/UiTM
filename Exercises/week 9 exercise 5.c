#include <stdio.h>

int main() {
	
	int i,j;
	
	for (i = 1; i <= 2; i++) {
		printf("\nWeek: %d", i);
		for (j = 1; j <= 7; j++) {
			printf("\n\tDay: %d", j);
		}
	}
	
	for (i = 1; i <= 2; i++) {
		printf("\nWeek: %d", i);
		for (j = 1; j <= 7; j++) {
			if (j%2 == 0) {
				continue;
			}
			printf("\n\tDay: %d", j);
		}
	}
	
	return 0;
}