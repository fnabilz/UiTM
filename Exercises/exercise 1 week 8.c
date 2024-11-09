#include <stdio.h>
#include <unistd.h>

int main() {
	int count = 1;
	
	do {
		/*if (count%5 == 0)
			printf("\n%d", count);*/
		printf("\n %d. Fikri", count);
		sleep(1);
		count++;
	}
	while (count);
	
	return 0;
}