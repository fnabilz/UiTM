
#include <stdio.h>

int main()
{
	// declare variable
	double weight;
	
	// get input
	printf("Enter weight (kg): ");
	scanf("%lf", &weight);
	
	// display data
	printf("Weight: %lf \n", weight);
	printf("Weight: %.2lf \n", weight);
}