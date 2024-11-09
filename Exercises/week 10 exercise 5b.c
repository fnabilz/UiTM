#include <stdio.h>

int main() {
	
	int price[5], i;
	float total_price;
	
	for (i = 0; i < 5; i++) {
		printf("Enter item price [%d]: ", i+1);
		scanf("%d", &price[i]);
		total_price += price[i];
	}
	
	total_price = total_price * 1.06;
	
	printf("\nTotal price of items after tax 6%: RM%.2f", total_price);
	
	return 0;
}