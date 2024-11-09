#include <stdio.h>

int main() {
	float salary;
	int shift;
	const int bonus = 1000;
	
	do {
		printf("Please enter salary: ");
		scanf("%f", &salary);
		
	} while (salary <= 0);
	
	printf("Please enter shift: ");
	scanf("%d", &shift);
	
	if (shift > 3)
		salary = salary + bonus;
	
	printf("Total salary is RM %.2f", salary);
	
	return 0;
}