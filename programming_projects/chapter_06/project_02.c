#include <stdio.h>

int main(void)
{
	int num1, num2, remainder, greatest_common_divisor;

	printf("Enter 2 integers: ");
	scanf("%d %d", &num1, &num2);

	if (num2 == 0) {
		greatest_common_divisor = num1;
	}
	else {
		while (num2 != 0) {
			remainder = num1 % num2;
			num1 = num2;
			num2 = remainder;
		}
	}

	printf("Greatest common divisor: %d\n", num1);

	return 0;
}
