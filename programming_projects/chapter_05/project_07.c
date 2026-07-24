#include <stdio.h>

int main(void)
{
	int entered_time_hours;
	int entered_time_minutes;
	int entered_time_converted_to_minutes;

	printf("Enter a 24-hour time: ");
	scanf("%2d:%2d", &entered_time_hours, &entered_time_minutes);

	entered_time_converted_to_minutes = (entered_time_hours * 60) + entered_time_minutes;

	if (entered_time_converted_to_minutes > 1305 || entered_time_converted_to_minutes < 480) {
		printf("Closest departure time is 8:00 am, arriving at 10:16 am.\n");
	}
	else if (entered_time_converted_to_minutes < 583) {
		printf("Closest departure time is 9:43 am, arriving at 11:52 am.\n");
	}
	else if (entered_time_converted_to_minutes < 679) {
		printf("Closest departure time is 11:19 am, arriving at 1:31 pm.\n");
	}
	else if (entered_time_converted_to_minutes < 767) {
		printf("Closest departure time is 12:47 pm, arriving at 3:00 pm.\n");
	}
	else if (entered_time_converted_to_minutes < 840) {
		printf("Closest departure time is 2:00 pm, arriving at 4:08 pm.\n");
	}
	else if (entered_time_converted_to_minutes < 945) {
		printf("Closest departure time is 3:45 pm, arriving at 5:55 pm.\n");
	}
	else if (entered_time_converted_to_minutes < 1140) {
		printf("Closest departure time is 7:00 pm, arriving at 9:20 pm.\n");
	}
	else if (entered_time_converted_to_minutes < 1305) {
		printf("Closest departure time is 9:45 pm, arriving at 11:58 pm.\n");
	}

	return 0;
}
