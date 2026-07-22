#include <stdio.h>

int main(void)
{
	int month = 0;
	int day = 0;
	int year = 0;

	printf("Please enter a date in mm/dd/yyyy format... ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("You entered the date %.4d%.2d%.2d.\n", year, month, day);	
	
	return 0;
}
