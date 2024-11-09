#include <stdio.h>

int main() {
	
	int celsius, fahrenheit;
	
	printf("Degress Celsius\t Degree Fahrenheit");
	for (celsius = 5; celsius <= 50; celsius += 5) {
		fahrenheit = (9.0/5.0 * celsius) + 32.0;
		printf("\n\t%d \t\t%d", celsius, fahrenheit);
	}                    
	
	return 0;
}