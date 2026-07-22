#include <stdio.h>

int main(void)
{
	int amount = 0;
	int twenties_count = 0;
	int tens_count = 0;
	int fives_count = 0;
	int ones_count = 0;
	int remainder = 0;

	printf("Enter a dollar amount to see how to pay with the least number of $20, $10, $5, and $1 bills... ");
	scanf("%d", &amount);

	/* Need to find remainder after dividing by 20 then 10 then 5 then 1 */
	/* Requires modulo operator (%) */

	twenties_count = amount / 20;
	remainder = amount % 20;
	tens_count = remainder / 10;
	remainder = remainder % 10;
	fives_count = remainder / 5;
	remainder = remainder % 5;
	ones_count = remainder / 1;

	printf("Twenties: %d\n", twenties_count);
	printf("Tens: %d\n", tens_count);
	printf("Fives: %d\n", fives_count);
	printf("Ones: %d\n", ones_count);

	return 0;
}
