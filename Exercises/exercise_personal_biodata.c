
#include <stdio.h>
#include <math.h>

int main()
{
	// declare variable
	char name[10], gender;
	int age;
	float height, weight, BMI, BSA;
	
	// get input from user
	printf("Enter name: ");
	scanf(" %s", name);
	
	printf("Enter gender (f/m): ");
	scanf(" %c", &gender);
	
	printf("Enter age: ");
	scanf("%d", &age);
	
	printf("Enter height (m): ");
	scanf("%f", &height);
	
	printf("Enter weight (kg): ");
	scanf("%f", &weight);
	
	BMI = weight/pow(height, 2);
	BSA = sqrt(height * 100 * weight/3600);
	
	// display data
	printf("\n\n\tMY BIODATA");
	printf("\n\t----------");
	printf("\nName:\t %s", name);
	
	if (gender == 'm')
		printf("\nGender:\t MALE");
	if (gender == 'f')
		printf("\nGender:\t FEMALE");
	
	printf("\nAge:\t %d", age);
	printf("\nHeight:\t %.2fm", height);
	printf("\nWeight:\t %.2fkg", weight);
	printf("\nBMI:\t %.2f", BMI);
	printf("\nBSA:\t %.2f", BSA);
	
	if (BMI >= 25)
		printf("You are overweight");

	return 0;
}