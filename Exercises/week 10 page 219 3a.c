#include <stdio.h>

int main() {
	
	double fees[10], new_fees[10];
	double price[] = {1555.90, 1854.90, 1932.50, 2069.60, 2188.20, 0.00, 0.00, 0.00, 0.00, 0.00};
	int i;
	
	printf("\nfees Content");
	for (i = 0; i < 10; i++) {
		printf("\n[%d]: %.2lf", i+1, fees[i]);
	}
	
	printf("\n\nnew_fees Content");
	for (i = 0; i < 10; i++) {
		new_fees[i] = price[i];
		printf("\n[%d]: %.2lf", i+1, new_fees[i]);
	}
	
	return 0;
}