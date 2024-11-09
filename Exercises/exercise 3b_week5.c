#include <stdio.h>

int main() {
	int num_1, num_2, num_3, num_4, num_5;
	
	printf("Enter 5 numbers: \n");
	scanf("%d %d %d %d %d", &num_1, &num_2, &num_3, &num_4, &num_5);
	
	if (num_1 > num_2 && num_1 > num_3 && num_1 > num_4 && num_1 > num_5) 
		printf("\n%d is the maximum number", num_1);
	else if (num_2 > num_1 && num_2 > num_3 && num_2 > num_4 && num_2 > num_5) 
		printf("\n%d is the maximum number", num_2);
	else if (num_3 > num_1 && num_3 > num_2 && num_3 > num_4 && num_3 > num_5) 
		printf("\n%d is the maximum number", num_3);
	else if (num_4 > num_1 && num_4 > num_2 && num_4 > num_3 && num_4 > num_5) 
		printf("\n%d is the maximum number", num_4);
	else
		printf("\n%d is the maximum number", num_5);
}