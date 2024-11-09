#include <stdio.h>

int main() 
{
	int x = 5, y = 3, z = 9;
	
	y *= x - 15;
	z %= x/5 * 2 % 3 + 3;
	x = ((z * 2) % 3);
	
	printf("y = %d, z = %d, x = %d", y, z, x);
	
	return 0;
}