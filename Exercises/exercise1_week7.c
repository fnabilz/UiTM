#include <stdio.h>

int main() {
	
	int package, quantity;
	char category;
	float total_charges;
	
	printf("Package \t\tCategory \t\tNormal(RM)\n\n");
	
	printf("1. Water Park \t\t(A)dult \t\t40.00\n");
	printf("              \t\t(C)hild \t\t30.00\n");
	printf("              \t\t(O)ku   \t\t15.00\n");
	printf("              \t\t(S)enior Citizen \t25.00\n");
	
	printf("2. Theme Park \t\t(A)dult \t\t50.00\n");
	printf("              \t\t(C)hild \t\t40.00\n");
	printf("              \t\t(O)ku   \t\t15.00\n");
	printf("              \t\t(S)enior Citizen \t25.00\n");
	
	printf("\nTickets are subject tp 6%% service tax\n");
	
	printf("Enter package  :  ");
	scanf("%d", &package);
	printf("Enter category  :  ");
	scanf(" %c", &category);
	printf("Enter quantity  :  ");
	scanf("%d", &quantity);
	
	if (package == 1) {
		if (category == 'A')
			total_charges = quantity * 40;
		else if (category == 'C')
			total_charges = quantity * 30;
		else if (category == 'O')
			total_charges = quantity * 15;
		else if (category == 'S')
			total_charges = quantity * 25;
		else
			printf("\nInvalid category");
	}
	else if (package == 2) {
		if (category == 'A')
			total_charges = quantity * 50;
		else if (category == 'C')
			total_charges = quantity * 40;
		else if (category == 'O')
			total_charges = quantity * 15;
		else if (category == 'S')
			total_charges = quantity * 25;
		else
			printf("\nInvalid category");
	}
	else
		printf("\nInvalid package");
	
	total_charges = total_charges + (total_charges * 0.06);
	
	printf("\nTotal Price  :  %.2f", total_charges);
	
}