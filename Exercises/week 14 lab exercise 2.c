#include <stdio.h>

float average(int num[]);
void evenorodd(int num, int *even, int *odd);
void print(int e, int o);

int main() {
	
	int i, even = 0, odd = 0, num[5];
	float avg;
	
	for (i = 0; i < 5; i++) {
		printf("Enter number %d:", i+1);
		scanf("%d", &num[i]);
	}
	
	avg = average(num);
	
	printf("\nAverage is %.2f\n", avg);
	
	for (i = 0; i < 5; i++) {
		evenorodd(num[i], &even, &odd);
	}
	
	print(even, odd);
	
	return 0;
}

float average(int num[]) {
	int i;
	float sum;
	float average = 0.0;
	for (i = 0; i < 5; i++) {
		sum = sum + num[i];
	}
	
	average = sum/5;
	
	return average;
}

void evenorodd(int num, int *even, int *odd) {
	if (num % 2 == 0)
		*even = *even + 1;
	else
		*odd = *odd + 1;
}

void print(int even, int odd) {
	printf("\nTotal of even numbers: %d", even);
	printf("\nTotal of odd numbers: %d", odd);
}