#include<stdio.h>

int calcAge(int currYr, int birthYr);  //prototype

int main()
{
	int myAge, birthYear;
	
	printf("Enter birth year: ");
	scanf("%d", &birthYear);
	
	myAge = calcAge(2024, birthYear); //call
	printf("\nMy age is %d years old.\n", myAge);
	return 0;
}

int calcAge(int currYr, int birthYr)  //definition
{
	int age;
	
	age = currYr - birthYr;
	return age;	
}
