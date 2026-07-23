#include <stdio.h>

int main(void)
{
	int number = 0;

	printf("Enter a 3 digit number: ");
	scanf("%d", &number);

	printf("The reversal is: %d%d%d\n", number % 10, (number / 10) % 10, number / 100);

	return 0;
}
