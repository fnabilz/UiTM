#include <stdio.h>
#include <string.h>

int main() {
	int length;
	char CarName1[20];
	char CarName2[20] = "Honda City";
	
	strcpy(CarName1, "Toyota Camry");
	printf("Car Name: %s", CarName1);
	
	strcpy(CarName1, CarName2);
	printf("\nCar Name: %s", CarName1);
	
	length = strlen(CarName1);
	printf("\nLength: %d", length);
	
	strcat(CarName1, CarName2);
	printf("\nCar Name: %s", CarName1);
	
	char faculty[10] = "ASASI";
	char input[10];
	int i;
	
	printf("\nEnter your faculty: ");
	gets(input);
	i = strcmp(faculty, input);
	
	if (i == 0) {
		printf("You are from ASASI");
	}
	else {
		printf("Sorry! You are NOT from ASASI");
	}
	
	
	return 0;
}