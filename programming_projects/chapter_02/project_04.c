#include <stdio.h>

float tax = .05f;

int main(void)
{
	float initial_amount = 0.0f;
	float total = 0.0f;

	printf("Enter a dollar amount (dolars & cents) to see your amount with a 5%% tax included... ");
	scanf("%f", &initial_amount);

	total = initial_amount + (initial_amount * tax);
	printf("Your total with tax is $%.2f.\n", total);

	return 0;
}
