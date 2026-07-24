#include <stdio.h>

int main(void)
{
	float taxable_income;
	float tax_amount;

	printf("Enter your taxable income: ");
	scanf("%f", &taxable_income);

	if (taxable_income < 0) {
		printf("Please enter a valid taxable income...\n");
		return 1;
	}

	if (taxable_income <= 750.00f) {
		tax_amount = taxable_income * .01f;
	}
	else if (taxable_income <= 2250.00f) {
		tax_amount = 7.50f + ((taxable_income - 750.00f) * .02f);
	}
	else if (taxable_income <= 3750.00f) {
		tax_amount = 37.50f + ((taxable_income - 2250.00f) * .03f);
	}
	else if (taxable_income <= 5250.00f) {
		tax_amount = 82.50f + ((taxable_income - 3750.00f) * .04f);
	}
	else if (taxable_income <= 7000.00f) {
		tax_amount = 142.50f + ((taxable_income - 5250.00f) * .05f);
	}
	else {
		tax_amount = 230.00f + ((taxable_income - 7000.00f) * .06f);
	}

	printf("Tax due: $%.2f\n", tax_amount);

	return 0;
}
