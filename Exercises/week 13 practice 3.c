#include <stdio.h>

void yearlyUpdate(int* loanYear, float monthlyPayment, float* outstandingAmount);

int main() {
	
	float loanAmount, monthlyPayment, outstandingAmount;
	int loanYear = 0;
	
	printf("Enter total loan amount: ");
	scanf("%f", &loanAmount);
	
	printf("Enter monthly payment: ");
	scanf("%f", &monthlyPayment);
	
	outstandingAmount = loanAmount;
	
	while (outstandingAmount > 0) {
		yearlyUpdate(&loanYear, monthlyPayment, &outstandingAmount);
		printf("Outstanding amount at end of year %d: RM%.2f\n", loanYear, outstandingAmount);
	}
	
	printf("Minimum number of years required: %d\n", loanYear);
	
	return 0;
}

void yearlyUpdate(int* loanYear, float monthlyPayment, float *outstandingAmount) {
	(*loanYear)++;
	float interest = *outstandingAmount * 0.0275;
	*outstandingAmount = *outstandingAmount * interest - (12 * monthlyPayment);
	
}