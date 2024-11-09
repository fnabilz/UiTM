#include <stdio.h>

float getData(), formula(float);

int main() {
	
	float x, y;
	x = getData();
	y = formula(x);
	
	printf("\nY = %.2f", y);
	
	return 0;
}

float getData() {
	float data;
	printf("X = ");
	scanf("%f", &data);
	return data;
}

float formula(float value) {
	float newValue;
	newValue = 3 * value - 1;
	return newValue;
}