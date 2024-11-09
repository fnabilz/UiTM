#include <stdio.h>

int main() {
	
	int markArr[5], failedArr[5];
	int i, j = 0;
	
	for (i = 0; i < 5; i++) {
		printf("Enter mark Student [%d]: ", i+1);
		scanf("%d", &markArr[i]);
	}
	
	for (i = 0; i < 5; i++) {
		if (markArr[i] < 50) {
			failedArr[j] = i+1;
			j++;
		}
	}
	
	printf("\nNumber of failed student: %d", j);
	printf("\nFailure");
	for (i = 0; i < j; i++) {
		printf("\nStudent %d", failedArr[i]);
	}
	
	return 0;
}