#include <stdio.h>

void displayAvg(int mark[]);

int main() {
	
	int markArr[5];
	int i;
	
	for (i = 0; i < 5; i++) {
		printf("Enter mark student %d: ", i+1);
		scanf("%d", &markArr[i]);
	}
	
	displayAvg(markArr);
	
	return 0;
}

void displayAvg(int mark[]) {
	
	int i;
	float avg, sum;
	
	for (i = 0; i < 5; i++) {
		sum = sum + mark[i];
	}
	
	avg = sum / 5;
	printf("Average = %.2f", avg);
	
}