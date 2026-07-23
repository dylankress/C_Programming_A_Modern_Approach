#include <stdio.h>

int main(void)
{
	int hours = 0;
	int minutes = 0;
	int converted_hours = 0;

	printf("Enter a 24-hour time: ");
	scanf("%2d:%2d", &hours, &minutes);

	if (hours < 00 || hours > 24) {
		printf("Please enter a valid time...\n");
		return 1;
	}
	
	if (minutes < 00 || minutes > 59) {
		printf("Please enter a valid time...\n");
		return 1;
	}

	if (hours == 24 && minutes > 00) {
		printf("Please enter a valid time...\n");
		return 1;
	}

	if (hours < 1 || hours > 12) {
		switch (hours) {
			case 00:	converted_hours = 0; break;
			case 13:	converted_hours = 1; break;
			case 14: converted_hours = 2; break;
			case 15: converted_hours = 3; break;
			case 16: converted_hours = 4; break;
			case 17: converted_hours = 5; break;
			case 18: converted_hours = 6; break;
			case 19: converted_hours = 7; break;
			case 20: converted_hours = 8; break;
			case 21: converted_hours = 9; break;
			case 22: converted_hours = 10; break;
			case 23: converted_hours = 11; break;
			case 24: converted_hours = 0; break;
		}
	}
	else {
		converted_hours = hours;
	}

	printf("Equivalent 12-hour time: %.2d:%.2d ", converted_hours, minutes);
	if (hours >= 00 && hours < 12) {
		printf("AM\n");
	}
	else {
		printf("PM\n");
	}

	return 0;
}
