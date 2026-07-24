#include <stdio.h>

int main(void)
{
	int numerical_grade;
	int grade_adjusted;

	printf("Enter a numerical grade: ");
	scanf("%d", &numerical_grade);

	if (numerical_grade > 100 || numerical_grade < 0) {
		printf("Please enter a valid numerical grade...\n");
		return 1;
	}

	grade_adjusted = numerical_grade / 10;

	switch (grade_adjusted) {
		case 10:	printf("Letter grade: A\n");
					break;
		case 9:	printf("Letter grade: A\n");
					break;
		case 8:	printf("Letter grade: B\n");
					break;
		case 7:	printf("Letter grade: C\n");
					break;
		case 6:	printf("Letter grade: D\n");
					break;
		default:	printf("Letter grade: F\n");
					break;
	}

	return 0;
}
