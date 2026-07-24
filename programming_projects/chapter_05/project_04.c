#include <stdio.h>

int main(void)
{
	int wind_speed;

	printf("Enter the wind speed (knots): ");
	scanf("%d", &wind_speed);

	if (wind_speed < 0) {
		printf("Please enter a valid wind speed...\n");
	}
	else if (wind_speed < 1) {
		printf("Wind speed: Calm\n");
	}
	else if (wind_speed < 4) {
		printf("Wind speed: Light air\n");
	}
	else if (wind_speed < 28) {
		printf("Wind speed: Breeze\n");
	}
	else if (wind_speed < 48) {
		printf("Wind speed: Gale\n");
	}
	else if (wind_speed < 64) {
		printf("Wind speed: Storm\n");
	}
	else {
		printf("Wind speed: Hurricane\n");
	}

	return 0;
}
