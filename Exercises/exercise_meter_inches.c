
#include <stdio.h>

#define inch 39.3701

int main()
{
	// variables
	float meter, inches;
	
	// input
	printf("Enter length (m): ");
	scanf("%f", &meter);
	
	// maths
	inches = meter * inch;
	
	// output
	printf("Length in inches: %.2f in", inches);
}