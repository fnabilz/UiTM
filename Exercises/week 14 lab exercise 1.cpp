#include <stdio.h>
#include <string.h>

int main() {
	
	char tale[4][30] {
		"snow white",
		"cinderella",
		"peter pan",
		"rumpestiltskin",
	};
	
	char temp[30];
	int i;
	
	printf("Before:\n");
	for (i = 0; i < 4; i++) {
		printf("%s\n", tale[i]);
	}
	
	strcpy(temp, tale[1]);
	strcpy(tale[1], tale[2]);
	strcpy(tale[2], temp);
	
	printf("\n\nAfter:\n");
	for (i = 0; i < 4; i++) {
		printf("%s\n", tale[i]);
	}
	
	return 0;
}