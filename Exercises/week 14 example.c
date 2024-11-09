#include <stdio.h>

void print(int m);

int count = 0;

int main() {
	
	int i, ary1[5] = {6,4,2,4,3};

	for (i = 0; i < 5; i++) {
		print(ary1[i]);
	}
	
	printf("Number of integer 4 in the array is %d\n", count);
	
	return 0;
}

void print(int m) {
	if (m == 4)
		count++;
}