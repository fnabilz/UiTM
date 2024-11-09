#include <stdio.h>

int main() {
	
	char ownership;
	int capacity;
	float tax;
	
	printf("Enter Ownership Type (P/C) : ");
	scanf(" %c", &ownership);
	printf("Enter Capacity (CC) : ");
	scanf("%d", &capacity);
	
	if (ownership == 'C' || ownership == 'c') {
		
		if (capacity <= 1000)
			tax = 20;
			
		else if (capacity >= 1001 && capacity <= 1200)
			tax = 110;
			
		else if (capacity >= 1201 && capacity <= 1400)
			tax = 140;
			
		else if (capacity >= 1401 && capacity <= 1600)
			tax = 180;
			
		else if (capacity >= 1601 && capacity <= 1800)
			tax = 400 + (0.8 * (capacity - 1600));
			
		else if (capacity >= 1801 && capacity <= 2000)
			tax = 560 + (1.0 * (capacity - 1800));
			
		else if (capacity >= 2001 && capacity <= 2500)
			tax = 760 + (3.0 * (capacity - 2000));
			
		else if (capacity >= 2501 && capacity <= 3000)
			tax = 2260 + (7.5 * (capacity - 2500));
			
		else if (capacity > 3000)
			tax = 6010 + (13.5 * (capacity - 3000));
			
		else
			printf("\nInvalid capacity");
			
	}
	else if (ownership == 'P' || ownership == 'p') {
		
		if (capacity <= 1000)
			tax = 20;
			
		else if (capacity >= 1001 && capacity <= 1200)
			tax = 55;
			
		else if (capacity >= 1201 && capacity <= 1400)
			tax = 70;
			
		else if (capacity >= 1401 && capacity <= 1600)
			tax = 90;
			
		else if (capacity >= 1601 && capacity <= 1800)
			tax = 200 + (0.4 * (capacity - 1600));
			
		else if (capacity >= 1801 && capacity <= 2000)
			tax = 280 + (0.5 * (capacity - 1800));
			
		else if (capacity >= 2001 && capacity <= 2500)
			tax = 380 + (1.0 * (capacity - 2000));
			
		else if (capacity >= 2501 && capacity <= 3000)
			tax = 880 + (2.5 * (capacity - 2500));
			
		else if (capacity > 3000)
			tax = 2130 + (4.5 * (capacity - 3000));
			
		else 
			printf("\nInvalid capacity.");
	}
	else
		printf("\nInvalid ownership type.");
		
	printf("\nRoad Tax                 : %7.2f", tax);
}