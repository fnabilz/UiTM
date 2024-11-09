#include <stdio.h>

int main() {
	
	int CH = 1;
	char num = 'b'
	
	switch (num) {
		case 'A':
			printf("%d \n", ++CH);
		case 'B':
		case 'b':
			CH++;
			printf("%d", ++CH);
		case 'c':
			printf("%d", CH++);
			++CH;
			break;
			
		default:
			printf("%d", ++CH);
	}
	
	return 0;
}