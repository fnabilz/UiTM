#include <stdio.h>

int main() {
	
	for (int i = 8; i >= 2; i -= 2) {
		printf("Hello %d\n", i);
	}
	
	for (int i = 1; i <= 100; i++) {
		printf("%d\n", i);
	}
	
	for (int i = 1; i <= 100; i++) {
		printf("Fikri\n");
	}
	
	for (int i = 1; i <= 100; i++) {
		printf("%d. Fikri\n", i);
	}
	
	for (int i = 100; i >= 1; i--) {
		if (i%2 != 0) {
			printf("Odd no: %d\n", i);
		}
	}
	
	return 0;
}