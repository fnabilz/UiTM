#include <stdio.h>

float gallonTolitres(float);

int main() {
	
	float gallon, litres;
	
	printf("Enter number of gallon(s): ");
	scanf("%f", &gallon);
	
	litres = gallonTolitres(gallon);
	
	printf("\n%.f gallon = %.4f litres", gallon, litres);
}

float gallonTolitres(float gallon) {
	float litres;
	litres = gallon * 3.7854;
	return litres;
}