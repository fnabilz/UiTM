#include <stdio.h>
#define tax 0.1

int main() {
	
	int adult, child;
	float total, total_tax;
	
	printf("Welcome to ticket machine!");
	printf("\n\nEnter your ticket quantity (adult: RM12.00): ");
	scanf("%d", &adult);
	printf("Enter your ticket quantity (children: RM6.00): ");
	scanf("%d", &child);
	
	printf("\nYou entered %d adult ticket(s) and %d children ticket(s)", adult, child);
	
	printf("\n\n**********");
	
	total = (adult * 12) + (child * 6);
	total_tax = total + (tax * total);
	
	printf("\n\nTotal ticket price = RM %.2f", total);
	printf("\nTotal ticket price with 10 percent tax = RM %.2f", total_tax);
	
	printf("\n\nThank you!");
	
	return 0;
}