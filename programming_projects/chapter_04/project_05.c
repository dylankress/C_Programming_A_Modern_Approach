#include <stdio.h>

int main(void)
{
	int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11;
	int sum1, sum2, check_digit;

	printf("Enter the first 11 digits of a UPC: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11);

	sum1 = num1 + num3 + num5 + num7 + num9 + num11;
	sum2 = num2 + num4 + num6 + num8 + num10;
	check_digit = 9 - ((((sum1 * 3) + sum2) - 1) % 10);

	printf("Check digit: %d\n", check_digit);

	return 0;
}
