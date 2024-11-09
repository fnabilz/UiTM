#include <stdio.h>

int main() 
{
	int x,y;
	
	printf("Calculator Program");
	printf("\n*****************");
	printf("\nPlease enter your first value (x): ");
	scanf("%d", &x);
	printf("Please enter your first value (y): ");
	scanf("%d", &y);
	
	printf("************************");
	printf("\nx + y = %d \nx * y = %d \nx - y = %d \nx %% y = %d \nx / y = %d", x+y, x*y, x-y, x%y, x/y);
	printf("\n\t\t~~~Thank you for using calculator program~~~");
	
	return 0;
}