#include <stdio.h>

double Average(float,float);

int main() {
	
	float test_1, test_2;
	double averageValue;
	
	printf("Enter value 1: ");
	scanf("%f", &test_1);
	printf("Enter value 2: ");
	scanf("%f", &test_2);
	
	averageValue = Average(test_1, test_2);
	
	printf("\nAverage of test_1 and test_2: %lf", averageValue);
	
	return 0;
}

double Average(float num1, float num2) {
	return (num1 + num2) / 2;
}