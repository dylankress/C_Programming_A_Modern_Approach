#include <stdio.h>

int main(void)
{
	int num1, num2, num3, num4;

	int candidate1 = 0;
	int candidate2 = 0;

	printf("Enter 4 different numbers: ");
	scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

	if (num1 > num2 && num1 > num3 && num1 > num4 || num1 < num2 && num1 < num3 && num1 < num4) {
		if (candidate1 == 0) {
			candidate1 = num1;
		} else { candidate2 = num1; }
	}

	if (num2 > num1 && num2 > num3 && num2 > num4 || num2 < num1 && num2 < num3 && num2 < num4) {
		if (candidate1 == 0) {
			candidate1 = num2;
		} else { candidate2 = num2; }
	}

	if (num3 > num1 && num3 > num2 && num3 > num4 || num3 < num1 && num3 < num2 && num3 < num4) {
		if (candidate1 == 0) {
			candidate1 = num3;
		} else { candidate2 = num3; }
	}

	if (num4 > num1 && num4 > num2 && num4 > num3 || num4 < num1 && num4 < num2 && num4 < num3) {
		if (candidate1 == 0) {
			candidate1 = num4;
		} else { candidate2 = num4; }
	}

	printf("Largest: %d\n", candidate1 > candidate2 ? candidate1 : candidate2);
	printf("Smallest: %d\n", candidate1 < candidate2 ? candidate1 : candidate2);

	return 0;
}
