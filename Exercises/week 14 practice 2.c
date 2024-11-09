#include <stdio.h>

void displayBonus(int);

int main() {
	
	int yrService[5];
	int i;
	
	for (i = 0; i < 5; i++) {
		printf("Enter year of service for employee %d: ", i+1);
		scanf("%d", &yrService[i]);
		
		displayBonus(yrService[i]);
	}
	
	return 0;
}

void displayBonus(int year) {
	
	if (year > 10) printf("3 Month bonus\n\n");
	else printf("One month bonus\n\n");
	
}