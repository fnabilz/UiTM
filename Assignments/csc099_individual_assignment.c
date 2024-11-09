#include <stdio.h>

const int passing_mark = 50;

int main() {
	
	// variable declaration
	int total_student = 0, total_marks = 0, total_passed = 0, total_failed = 0;
	float average_mark = 0, percentage_passed = 0, percentage_failed = 0, highest_mark = 0, lowest_mark = 100, mark = 0;
	
	// enter total number of students
	while (total_student == 0) { 
		printf("\nEnter total number of students: ");
		scanf("%d", &total_student);
		if (total_student < 0) {
			// if a negative number is entered, it will display error 
			printf("\nERROR: Invalid input, please enter a positive number.\n"); 
			total_student = 0;
		}
	}
	
	// enter mark for each student
	for (int i = 0; i < total_student; i++) {
		mark = 0;
		while (mark == 0) {
			
			printf("Enter mark for student [%d]: ", i+1);
			scanf("%f", &mark);
			
			if (mark < 0 || mark > 100) {
				// if a negative number or a number greater than 100 is entered, it will display error
				printf("\nERROR: Invalid input, please enter a number between 0 - 100.\n");
				mark = 0;
			}
			else {
				// calculate total
				total_marks = total_marks + mark;
				
				// calculate total passed and failed
				if (mark >= passing_mark)
					++total_passed;
				else
					++total_failed;
				
				// find the lowest and highest mark
				if (mark > highest_mark) {
					highest_mark = mark;
				}		
				if (mark < lowest_mark) {
					lowest_mark = mark;
				}
			}		
		}
	}
	
	
	// quick maths
	average_mark = total_marks/total_student;
	percentage_passed = total_passed * 100 / total_student;
	percentage_failed = total_failed * 100 / total_student;
	
	// display output
	printf("\n--------------------------------");
	printf("\nTotal students: %d", total_student);
	printf("\nHighest mark: %.2f%%", highest_mark);
	printf("\nLowest mark: %.2f%%", lowest_mark);
	printf("\nAverage mark: %.2f%%", average_mark);
	printf("\nTotal passed: %d", total_passed);
	printf("\nTotal failed: %d", total_failed);
	printf("\nPercentage of students passed: %.2f%%", percentage_passed);
	printf("\nPercentage of students failed: %.2f%%", percentage_failed);
	
	return 0;
}