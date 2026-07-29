#include <stdio.h>

int main(void)
{
	int entered_date_year = -1;
	int entered_date_month = -1;
	int entered_date_day = -1;
	int earliest_date_year = 999999;
	int earliest_date_month = 999999;
	int earliest_date_day = 999999;

	while (entered_date_year != 0 && entered_date_month != 0 && entered_date_day != 0) {
		printf("Enter a date (mm/dd/yy): ");
		scanf("%d/%d/%d", &entered_date_month, &entered_date_day, &entered_date_year);
		
		if (entered_date_year == 0 && entered_date_month == 0 && entered_date_day == 0) {
			break;
		}

		else if (entered_date_year < earliest_date_year) {
			earliest_date_year = entered_date_year;
			earliest_date_month = entered_date_month;
			earliest_date_day = entered_date_day;
		}
		else if (entered_date_month < earliest_date_month) {
			earliest_date_year = entered_date_year;
			earliest_date_month = entered_date_month;
			earliest_date_day = entered_date_day;
		}
		else if (entered_date_day < earliest_date_day) {
			earliest_date_year = entered_date_year;
			earliest_date_month = entered_date_month;
			earliest_date_day = entered_date_day;
		}
		else {
			continue;
		}
	}

	printf("%d/%d/%d is the earliest date.\n", earliest_date_month, earliest_date_day, earliest_date_year);
	
	return 0;
}
