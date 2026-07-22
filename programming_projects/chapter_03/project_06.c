#include <stdio.h>

int main(void)
{
	int num1 = 0;
	int denom1 = 0;
	int num2 = 0;
	int denom2 = 0;
	int result_num = 0;
	int result_denom = 0;

	printf("Enter 2 fractions separated by a plus sign to add them together (x/x + x/x): ");
	scanf("%d/%d + %d/%d", &num1, &denom1, &num2, &denom2);

	result_num = num1 * denom2 + num2 * denom1;
	result_denom = denom1 * denom2;

	printf("The sum is: %d/%d\n", result_num, result_denom);

	return 0;
}
