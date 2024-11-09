// This program is to calculate an area of a circle

#include <stdio.h>
#define pi 3.142	// This is a constant value

int main() {
	
	float radius, area;
	
	printf("Please enter the radius value: ");
	scanf("%f", &radius);
	
	area = pi * (radius * radius);
	printf("area = %.2f", area);
	
	return 0;
}
