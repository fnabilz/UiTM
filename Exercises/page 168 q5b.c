#include <stdio.h>

void evenORodd(int);

int main() {
	
	int num;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	evenORodd(num);
	
	return 0;
}

void evenORodd(int num) {
	if (num % 2 == 0)
		printf("\nThe number is even");
	else
		printf("\nThe number is odd");
}