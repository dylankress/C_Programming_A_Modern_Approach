#include <stdio.h>

int main(void)
{
	float trade_value;
	float commission;

	 do {

		trade_value = 0;
		commission = 0;

		printf("Enter total value of trade: ");
		scanf("%f", &trade_value);

		if (trade_value == 0) {
			return 0;
		}
		else if (trade_value < 2500.00f) {
			commission = 30.00f + .017f * trade_value;
		}
		else if (trade_value < 6250.00f) {
			commission = 56.00f + .0066f * trade_value;
		}
		else if (trade_value < 20000.00f) {
			commission = 76.00f + .0034f * trade_value;
		}
		else if (trade_value < 50000.00f) {
			commission = 100.00f + .0022f * trade_value;
		}
		else if (trade_value < 500000.00f) {
			commission = 155.00f + .0011f * trade_value;
		}
		else {
			commission = 255.00f + .0009f * trade_value;
		}

		if (commission < 39.00f) {
			commission = 39.00f;
		}

		printf("Commission: $%.2f\n", commission);

	} while (trade_value != 0);

	return 0;
}
