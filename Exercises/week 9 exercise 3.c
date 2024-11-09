#include <stdio.h>

int main() {
	
	int i,  firstNum, secondNum, oddSum = 0, evenSum = 0;
	
	printf("\nFirst number must be less than second number");
	printf("\nEnter first number: ");
	scanf("%d", &firstNum);
	printf("Enter second number: ");
	scanf("%d", &secondNum);
	
	printf("\n    Odd numbers\t  Even numbers\n");
	for (i = firstNum; i <= secondNum; i++) {
		if (i%2 != 0) {
			printf("         %d", i);
			oddSum = oddSum + i;
		}
		else {
			printf("\t        %d\n", i);
			evenSum = evenSum + i;
		}
	}
	
	printf("\nSum odd numbers between first number and second number: %d", oddSum);
	printf("\nSum even numbers between first number and second number: %d", evenSum);
	
	return 0;
}