#include <stdio.h>

int main() {
	
	float price[3];
	int i;
	
	for (i = 0; i < 3; i++) {
		printf("Enter a value: ");
		scanf("%f", &price[i]);
		
	}
	
	printf("\nList of price");
	for (i = 0; i < 3; i++) {
		printf("\nRM%.2f", price[i]);
	}
	
	return 0;
}