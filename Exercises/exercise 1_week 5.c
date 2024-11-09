#include <stdio.h>

int main() {
	
	float net_salary, income_tax, zakat;
	
	printf("Enter salary for 2021: ");
	scanf("%f", &net_salary);
	
	if (net_salary <= 0) {
		printf("Net salary must be greater than 0.");
		printf("\nPlease enter again: ");
		scanf("%f", &net_salary);
	}
	
	printf("\nNet salary for 2021: %.2f", net_salary);
	
	if (net_salary <= 20265)
		printf("\n2021 - Zakat : 0.00");
	else {
		zakat = net_salary * 0.025;
		printf("\n2021 - Zakat : %.2f", zakat);
	}
	
	if (net_salary > 0 && net_salary <= 5000)
		income_tax = 0;	
	else if (net_salary > 5000 && net_salary <= 20000)
		income_tax = (net_salary - 5000) * 0.01;
	else if (net_salary > 20000 && net_salary <= 35000)
		income_tax = (net_salary - 5000) * 0.03;
	else
		income_tax = (net_salary - 5000) * 0.08;
	
	printf("\n2021 - Icometax : %.2f", income_tax);
}