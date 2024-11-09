#include <stdio.h>

int main()
{
	int n_students, P = 0, F = 0; 
	float marks, percentage1, percentage2, average, highest = 0, lowest = 100, total = 0;
		
	//Input Number of students
	do {
		printf("Number of Students: ");
		scanf("%d", &n_students);
		
		if(n_students <= 0) {
			printf("Invalid, Please Re-enter The Exact Value. \n");
		}
	} while (n_students <= 0);
	
	//Input Marks
	printf("\n----------Enter Marks----------\n\n");
	for (int z = 0; z < n_students; z++){
	
		do {
			printf("Student %d: ", z + 1);
			scanf("%f", &marks);
			
			if(marks < 0 ) {
				printf("Error, Please Try Again\n");
			}	
			else if(marks > 100) {
				printf("Error, Please Try Again\n");
			}
		} while (marks < 0 || marks > 100);	
		
		//Process (H or L)
		if(marks > highest){
			highest = marks;
		}	
		else if(marks < lowest){
			lowest = marks;
		}
		
		//Process (Avg)
		total += marks;
		
		//Process (Pass or Fail)
		if(marks >= 50){
			P += 1;
		}
		else{
			F += 1;
		}
	}
	average = total / n_students;
	
	percentage1 = (float) P / n_students * 100;
	percentage2 = (float) F / n_students * 100;
	
	//Output
	printf("\nHighest Mark: %.2f", highest);
	printf("\nLowest Mark: %.2f", lowest);
	printf("\nAverage Mark: %.2f", average);
	printf("\nNumber of Passed Student(s): %d", P);
	printf("\nNumber of Failed Student(s): %d", F);
	printf("\n\n-----------Percentage-----------");
	printf("\n\nPassed: %.2f%%", percentage1);
	printf("\nFailed: %.2f%%", percentage2);
	
	return 0;
}
