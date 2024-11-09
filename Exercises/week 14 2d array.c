#include <stdio.h>

void display(int a);

int main() {
	
	int ary[4][3] = {
		{1,2,3},
		{2,4,6},
		{3,6,9},
		{3,2,1},
	};
	
	int i,j;
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			display(ary[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

void display(int a) {
	printf("%5d", a);
}