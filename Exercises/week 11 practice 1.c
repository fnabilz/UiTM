#include <stdio.h>

#define insurance 0.1

void displayMenu();
float calculateRental(float, int);

int main() {
	
	int carModel, rentDuration;
	float totalRental;
	
	// display rental list
	displayMenu();
	
	printf("\n\nEnter vehicle model [1-5]: ");
	scanf("%d", &carModel);
	printf("Enter rental duration (days): ");
	scanf("%d", &rentDuration);
	
	if (carModel == 1) 
		totalRental = calculateRental(120.00, rentDuration);
	else if (carModel == 2)
		totalRental = calculateRental(140.00, rentDuration);
	else if (carModel == 3)
		totalRental = calculateRental(200.00, rentDuration);
	else if (carModel == 4)
		totalRental = calculateRental(100.00, rentDuration);
	else if (carModel == 5)
		totalRental = calculateRental(200.00, rentDuration);
		
	printf("\n\nTotal rental price including insurance: RM%.2f", totalRental);
	
	return 0;
}

void displayMenu() {
	printf("\nPULAU CAR RENTAL");
	printf("\n-------------------------------------------");
	printf("\nVEHICLE MODEL\t\tRENTAL PER DAY (RM)");
	printf("\n[1] PROTON SAGA\t\t\t120.00");
	printf("\n[2] PROTON PESONA\t\t140.00");
	printf("\n[3] PROTON EXORA\t\t200.00");
	printf("\n[4] PERODUA MYVI\t\t100.00");
	printf("\n[5] PERODUA ARUZ\t\t200.00");
	printf("\n-------------------------------------------");
}

float calculateRental(float price, int duration) {
	
	float totalPrice;
	
	totalPrice = price * duration;
	totalPrice = (insurance * totalPrice) + totalPrice;
	
	return totalPrice;
}