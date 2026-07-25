#include <stdio.h>

int main(void)
{
	float entered_number, largest_number;

	do {
		printf("Enter a number: ");
		scanf("%f", &entered_number);
		if (entered_number > largest_number) {
			largest_number = entered_number;
		}
	} while (entered_number != 0);

	printf("The largest number entered was %f.\n", largest_number);

	return 0;
}
