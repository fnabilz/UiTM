#include <stdio.h>

int main() {
	
	int water;
	float price;
	
	printf("Enter water usage: ");
	scanf("%d", &water);
	
	if (water < 0)
		printf("\n Invalid input");
	else if (water >= 0 && water <= 20)
		price = water * 0.57;
	else if (water >= 21 && water <= 35)
		price = water * 1.03;
	else
		price = water * 2;
	
	printf("Price = RM%.2f\n", price);
}