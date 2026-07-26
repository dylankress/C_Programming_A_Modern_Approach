#include <stdio.h>

int main(void)
{
	int entered_number;

	printf("Enter a number of any length: ");
	scanf("%d", &entered_number);

	printf("Your number reversed: ");

	do {
		printf("%d", entered_number % 10);
		entered_number = entered_number / 10;
	} while (entered_number != 0);

	printf("\n");

	return 0;
}
