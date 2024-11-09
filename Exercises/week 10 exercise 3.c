#include <stdio.h>

int main() {
	
	int numArr[5], oddArr[5], i, j = 0;
	
	for (i = 0; i < 5; i++) {
		printf("Enter a value : ");
		scanf("%d", &numArr[i]);
	}
	
	printf("\nAll Number");
	for (i = 0; i < 5; i++) {
		printf("\n\t%d", numArr[i]);
	}
	
	for (i = 0; i < 5; i++) {
		if (numArr[i] % 2 == 1) {
			oddArr[j] = numArr[i];
			j++;
		}
	}
	
	printf("\nOdd Number");
	for (i = 0; i < j; i++) {
		printf("\n\t%d", oddArr[i]);
	}
	
	
	return 0;
}