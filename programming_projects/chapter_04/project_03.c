#include <stdio.h>

int main(void)
{
	int digit_01 = 0;
	int digit_02 = 0;
	int digit_03 = 0;

	printf("Enter a three-digit number: ");
	scanf("%1d%1d%1d", &digit_01, &digit_02, &digit_03);

	printf("The reversal is: %d%d%d\n", digit_03, digit_02, digit_01);

	return 0;
}
