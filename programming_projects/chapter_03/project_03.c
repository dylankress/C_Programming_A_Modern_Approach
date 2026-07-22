#include <stdio.h>

int main(void)
{
	int gs1_prefix = 0;
	int group_identifier = 0;
	int publisher_code = 0;
	int item_number = 0;
	int check_digit = 0;

	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gs1_prefix, &group_identifier, &publisher_code, &item_number, &check_digit);

	printf("GS1 Prefix: %d\n", gs1_prefix);
	printf("Group Inentifier: %d\n", group_identifier);
	printf("Publisher Code: %d\n", publisher_code);
	printf("Item Number: %d\n", item_number);
	printf("Check Digit: %d\n", check_digit);

	return 0;
}
