#include <stdio.h>

int main(void)
{
	int number, digit1, digit2;

	printf("Enter a two-digit number: ");
	scanf("%d", &number);

	digit1 = number / 10;
	digit2 = number % 10;

	printf("You entered the number ");

	if (digit1 == 1) {
		if (digit2 == 0) {
			printf("ten.\n");
			return 0;
		}
		if (digit2 == 1) {
			printf("eleven.\n");
			return 0;
		}
		if (digit2 == 2) {
			printf("twelve.\n");
			return 0;
		}
		if (digit2 == 3) {
			printf("thirteen.\n");
			return 0;
		}
		if (digit2 == 4) {
			printf("fourteen.\n");
			return 0;
		}
		if (digit2 == 5) {
			printf("fifteen.\n");
			return 0;
		}
		if (digit2 == 6) {
			printf("sixteen.\n");
			return 0;
		}
		if (digit2 == 7) {
			printf("seventeen.\n");
			return 0;
		}
		if (digit2 == 8) {
			printf("eighteen.\n");
			return 0;
		}
		if (digit2 == 9) {
			printf("nineteen.\n");
			return 0;
		}
	}
	else {
		switch (digit1) {
			case 2: printf("twenty-"); break;
			case 3: printf("thirty-"); break;
			case 4: printf("fourty-"); break;
			case 5: printf("fifty-"); break;
			case 6: printf("sixty-"); break;
			case 7: printf("seventy-"); break;
			case 8: printf("eighty-"); break;
			case 9: printf("ninety-"); break;
		}
	}

	switch (digit2) {
		case 1: printf("one.\n"); break;
		case 2: printf("two.\n"); break;
		case 3: printf("three.\n"); break;
		case 4: printf("four.\n"); break;
		case 5: printf("five.\n"); break;
		case 6: printf("six.\n"); break;
		case 7: printf("seven.\n"); break;
		case 8: printf("eight.\n"); break;
		case 9: printf("nine.\n"); break;
	}

	return 0;
}
