#include <stdio.h>

int main() {
	
	int num, sum = 0;
	
	while (1) {
		printf("Enter a number: ");
		scanf("%d", &num);
		
		if (num < 0){
			break;
		}
		sum = sum + num;
	}
	
	printf("\nThe sum is %d", sum);
	
	return 0;
}