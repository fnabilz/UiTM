#include <stdio.h>

int main() {
	
	char alphabet;
	
	printf("Enter a character: ");
	scanf("%c", &alphabet);
	
	if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u')
		printf("It's a vowel letter");	
	else
		printf("It's a non vowel letter");
}