#include <stdio.h>

int main() {
	int i, j;
	
	printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");
	
	for (i = 1; i <= 11; i++) {
		if (i == 11) {
			for (j = 1; j <= 31; j++) {
				printf("%d\t", j);
				if (j == 4 || j == 11 || j == 18 || j == 25)
					printf("\n");
			}
		}
		else if (i == 7)
			printf("\n");
		else
			printf(" \t");
	}
	
	return 0;
}