#include <stdio.h>
#include <math.h>

float EquilateralArea(int);

int main() {
	
	int side = 0;
	float area;
	
	while (side <= 0) {
		printf("\nEnter side's length: ");
		scanf("%d", &side);
		
		if (side <= 0)
			printf("Please enter positive value.");
	}
	
	area = EquilateralArea(side);
	
	printf("\nArea of an equilateral triangle: %.4f", area);
	
	return 0;
}

float EquilateralArea(int num) {
	float newArea;
	newArea = (pow(num, 2) * sqrt(3))/4;
	return newArea;
}