
#include <stdio.h>

int main()
{
	// declare variable
	float height;
	
	// get input
	printf("Enter height (m): ");
	scanf("%f", &height);
	
	// display data
	printf("Height: %f \n", height);
	printf("Height: %.2f \n", height);
}