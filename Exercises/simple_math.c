/*	Date : 16 Jan 2024
	Lab : MKE1
	Group : E06A */
	
	
#include <stdio.h>		//	This is a library

int main() {		//	This is main program
	
	int num1, num2, num3, sum;
	printf("Enter Number 1 : ");
	scanf("%d", &num1);
	printf("Enter Number 2 : ");
	scanf("%d", &num2);
	printf("Enter Number 3 : ");
	scanf("%d", &num3);
	
	sum = num1 + num2 + num3;
	
	printf("Total = %d", sum);
	
return sum;
}
