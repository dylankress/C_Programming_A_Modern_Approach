#include <stdio.h>

int main(void)
{
	int days_in_month, month_start_day, i, j;

	printf("Enter number of days in month: ");
	scanf("%d", &days_in_month);
	printf("Enter starting day of the week (1=Sunday, 7=Saturday): ");
	scanf("%d", &month_start_day);

	days_in_month = days_in_month + (month_start_day -1);

	for (i = 1, j = days_in_month - 1; i <= days_in_month; i++) {
		if (i >= month_start_day) {
			printf("%-3d", days_in_month - j);
			j--;
		}
		else {
			printf("   ");
		}
		if (i % 7 == 0) {
			printf("\n");
		}
	}

	printf("\n");

	return 0;
}
