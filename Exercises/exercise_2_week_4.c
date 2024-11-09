#include <stdio.h>

int main() 
{
	int count = 0, sum = 0;
	
	count = count + 1;
	sum = sum + count; // sum = 1
	printf("%d\n", count);
	
	printf("%d\n", ++count);
	sum = sum + count; // sum = 3
	printf("%d\n", ++count);
	sum = sum + count; // sum = 6
	printf("%d\n", ++count);
	sum = sum + count; // sum = 10
	printf("%d\n", ++count);
	sum = sum + count; // sum = 15
	printf("sum of numbers = %d", sum);
	
	return 0;
}