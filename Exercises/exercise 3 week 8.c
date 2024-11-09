#include <stdio.h>

int main() {
	int count = 1;
	float inch;
	
	printf("Meters | Inches");
	while (count <= 10) {
		inch = count * 39.37;
		printf("\n   %d\t  %.2f", count, inch);
		++count;
	}
	
	return 0;
}