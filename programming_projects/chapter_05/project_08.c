#include <stdio.h>

int main(void)
{
	int first_date_month, first_date_day, first_date_year;
	int second_date_month, second_date_day, second_date_year;

	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &first_date_month, &first_date_day, &first_date_year);

	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &second_date_month, &second_date_day, &second_date_year);

	if (first_date_year < second_date_year) {
		printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", first_date_month, first_date_day, first_date_year, second_date_month, second_date_day, second_date_year);
	}
	else if (first_date_month < second_date_month) {
		printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", first_date_month, first_date_day, first_date_year, second_date_month, second_date_day, second_date_year);
	}
	else if (first_date_day < second_date_day) {
		printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", first_date_month, first_date_day, first_date_year, second_date_month, second_date_day, second_date_year);
	}
	else {
		printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", second_date_month, second_date_day, second_date_year, first_date_month, first_date_day, first_date_year);
	}

	return 0;
}
