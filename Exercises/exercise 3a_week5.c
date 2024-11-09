#include <stdio.h>
#include <math.h>

int main() {
	int answer;
	
	printf("Enter answer of 10 power of 2: ");
	scanf("%d", &answer);

	if (answer == 100)
		printf("\nCongratulations!");
	else
		printf("\nIncorrect answer.");
}