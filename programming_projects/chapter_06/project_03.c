#include <stdio.h>

int main(void)
{
	int original_numerator, numerator, original_denominator, denominator, remainder, greatest_common_divisor;

	printf("Enter a fraction (x/x): ");
	scanf("%d/%d", &numerator, &denominator);

	original_numerator = numerator;
	original_denominator = denominator;

	if (denominator == 0) {
		greatest_common_divisor = numerator;
	}
	else {
		while (denominator != 0) {
			remainder = numerator % denominator;
			numerator = denominator;
			denominator = remainder;
		}
	}

	greatest_common_divisor = numerator;
	numerator = original_numerator / greatest_common_divisor;
	denominator = original_denominator / greatest_common_divisor;

	printf("In lowest terms: %d/%d\n", numerator, denominator);

	return 0;
}
