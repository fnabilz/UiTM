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
	
	printf("\nTickets are subject to 6%% service tax\n\n");
	
	printf("Enter package  :  ");
	scanf("%d", &package);
	printf("Enter category  :  ");
	scanf(" %c", &category);
	printf("Enter quantity  :  ");
	scanf("%d", &quantity);
	
	switch (package) {
		case 1:
			switch(category) {
				case 'a':
				case 'A': 	
					total_charges = quantity * 40; 
					break;
				case 'c':
				case 'C':
					total_charges = quantity * 30;
					break;
				case 'o':
				case 'O':
					total_charges = quantity * 15;
					break;
				case 's':
				case 'S':
					total_charges = quantity * 25;
					break;
				default:
					printf("\nInvalid category");
					break;
			}
			break;
		case 2:
			switch(category) {
				case 'a':
				case 'A': 	
					total_charges = quantity * 50; 
					break;
				case 'c':
				case 'C':
					total_charges = quantity * 40;
					break;
				case 'o':
				case 'O':
					total_charges = quantity * 15;
					break;
				case 's':
				case 'S':
					total_charges = quantity * 25;
					break;
				default:
					printf("\nInvalid category");
					break;
			}
			break;
		default:
			printf("\nInvalid package");
			break;
	}
	
	total_charges = total_charges + (total_charges * 0.06);
	
	printf("\nTotal Price  :  %.2f", total_charges);
	
}