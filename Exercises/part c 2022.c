#include <stdio.h>

float calcTotalPrice(int msian[], int totalVisitor, int *totSenior);
void display(float totalPrice, int totSenior);

int main() {
	
	int msian[10], totalVisitor = 0, totSenior = 0, choice;
	float totalPrice = 0;
	
	int i;
	
	for (i = 0; i < 10; i++) {
		
		printf("Enter age for person %d : ", i+1);
		scanf("%d", &msian[i]);
		
		while (msian[i] <= 0) {
			printf("Value must be positive : ", i+1);
			scanf("%d", &msian[i]);	
		}
		
		++totalVisitor;
		
		printf("\nMore visitor (1 = Yes, 0 = No) : ");
		scanf("%d", &choice);
		
		if (choice == 0) 
			break;
			
		printf("\n");
	}
	
	totalPrice = calcTotalPrice(msian, totalVisitor, &totSenior);
	display(totalPrice, totSenior);
	
	return 0;
}

float calcTotalPrice(int msian[], int totalVisitor, int *totSenior) {
	
	int totAdult = 0, totChild = 0;
	float totalPrice;
	
	int i;
	
	for (i = 0; i < totalVisitor; i++) {
		
		if (msian[i] >= 3 && msian[i] <= 12)
			totChild += 1;
			
		else if (msian[i] >= 13 && msian[i] <= 59)
			totAdult += 1;
			
		else
			*totSenior += 1;
			
	}
	
	totalPrice = (totChild * 16.20) + (totAdult * 40.50) + (*totSenior * 20.70);
	
	return totalPrice;
}

void display(float totalPrice, int totSenior) {
	
	float netPrice = 0, discountPrice = 0;
	
	if (totSenior >= 3) 
		discountPrice = totalPrice * 0.1;
		
	netPrice = totalPrice - discountPrice;
	
	printf("\n\n\tPayment Receipt");
	printf("\n\t---------------");
	printf("\n\tTotal Price : \tRM %.2f", totalPrice);
	printf("\n\tDiscount : \tRM %.2f", discountPrice);
	printf("\n\tNet Price : \tRM %.2f", netPrice);
	printf("\n");
		
}
