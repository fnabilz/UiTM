
#include <stdio.h>

int main()
{
	// variables
	int seconds, minutes, hours;
	
	// input
	printf("Enter time in seconds: ");
	scanf("%d", &seconds);
	
	// maths
	hours = (seconds/3600);
	minutes = (seconds/60) % 60;
	seconds = seconds % 60;
	
	// output
	printf("\nTime: %d hrs %d min %d s", hours, minutes, seconds);
}