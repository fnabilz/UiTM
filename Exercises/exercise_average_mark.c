
#include <stdio.h>

int main() 
{
	// variables
	float mark_1, mark_2, mark_3, mark_4, mark_5, total_mark, total_average;
	
	// input
	printf("Enter each value for mark 1,2,3,4,5: \n");
	scanf("%f %f %f %f %f", &mark_1, &mark_2, &mark_3, &mark_4, &mark_5);
	
	// maths
	total_mark = mark_1 + mark_2 + mark_3 + mark_4 + mark_5;
	total_average = total_mark/5;
	
	// output
	printf("Total averages marks: %.2f%%", total_average);
}