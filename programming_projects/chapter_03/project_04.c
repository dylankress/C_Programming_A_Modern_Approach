#include <stdio.h>

int main(void)
{
	int phone_number_area_code = 0;
	int phone_number_first_three = 0;
	int phone_number_last_four = 0;

	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &phone_number_area_code, &phone_number_first_three, &phone_number_last_four);

	printf("You entered %d.%d.%d\n", phone_number_area_code, phone_number_first_three, phone_number_last_four);

	return 0;
}
