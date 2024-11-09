#include <stdio.h>

float findTallest(float array[]);

int main() {
	
	float height[5], tallest;
	int i;
	
	for (i = 0; i < 5; i++) {
		printf("Enter height %d: ", i+1);
		scanf("%f", &height[i]);
	}
	
	tallest = findTallest(height);
	printf("\nTallest = %.2f", tallest);
	
	return 0;
}

float findTallest(float array[]) {
	
	float max = 0;
	int i;
	
	for (i = 0; i < 5; i++) {
		if (array[i] > max)
			max = array[i];
	}
	
	return max;
} 