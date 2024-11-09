#include <stdio.h>

int main() {
	
	int hour;
	float rate;
	
	printf("Enter hour of parking: ");
	scanf("%f", &hour);
	
	if (hour <= 0)
		printf("\nPlease enter number greater than 0");
	else if (hour == 1)
		rate = 0;
	else if (hour >= 2 && hour <= 5)
		rate = (hour - 1) * 2;
	else if (hour >= 6 && hour <= 12)
		rate = (4 * 2) + (hour - 5) * 1.5;
	else if (hour >= 13)
		rate = (4 * 2) + (7 * 1.5) + (hour - 12) * 1;
		
	printf("\nTotal parking rate: RM %.2f", rate);
	
	return 0;
}