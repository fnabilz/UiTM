#include <stdio.h>

float BMI(float, float);
void category(float *bmi);

int main() {
	
	float weight, height;
	
	do {
		printf("Enter weight: ");
		scanf("%f", &weight);
		printf("Enter height: ");
		scanf("%f", &height);
		
	} while (weight && height < 0);
	
	BMI(weight, height);
	return 0;
}

float BMI(float weight, float height) {
	float bmi;
	bmi = weight / (height * height);
	printf("\nBMI = %.2f", bmi);
	category(&bmi);
}

void category(float *bmi) {
	if (*bmi < 18.5) 
		printf("\nUnderweight");
	else if (*bmi >= 18.5 && *bmi <= 24.9)
		printf("\nNormal");
	else if (*bmi > 24.9 && *bmi <= 29.9)
		printf("\nOverweight");
	else 
		printf("\nObesity");
}