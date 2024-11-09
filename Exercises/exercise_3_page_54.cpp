#include <stdio.h>

int main() 
{
	int x,y;
	
	printf("Calculator Program");
	printf("\n*****************");

	printf("\nPlease enter your first value (x): ");
	scanf(" %d", x);

	printf("\nPlease enter your first value (y): ");
	scanf("%d", y);
	
	printf("\n************************");
	printf("\nx+y = %d \n", x+y);
}