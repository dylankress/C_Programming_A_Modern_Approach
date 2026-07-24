#include <stdio.h>

int main(void)
{
	int total_sold_shares;
	float individual_share_value;
	float total_transaction_value;
	float commission;
	float rival_commission;

	printf("Enter total number of shares sold: ");
	scanf("%d", &total_sold_shares);
	printf("Enter the value of the individual share: ");
	scanf("%f", &individual_share_value);

	total_transaction_value = total_sold_shares + individual_share_value;

	if (total_transaction_value < 2500.00f) {
		commission = 30.00f + .017f * total_transaction_value;
	}
	else if (total_transaction_value < 6250.00f) {
		commission = 56.00f + .0066f * total_transaction_value;
	}
	else if (total_transaction_value < 20000.00f) {
		commission = 76.00f + .0034f * total_transaction_value;
	}
	else if (total_transaction_value < 50000.00f) {
		commission = 100.00f + .0022f * total_transaction_value;
	}
	else if (total_transaction_value < 500000.00f) {
		commission = 155.00f + .0011f * total_transaction_value;
	}
	else {
		commission = 255.00f + .0009f * total_transaction_value;
	}

	if (commission < 39.00f) {
		commission = 39.00f;
	}

	printf("Commission: $%.2f\n", commission);

	if (total_sold_shares < 2000) {
		rival_commission = 33.00f + .03f * total_sold_shares;
	}
	else {
		rival_commission = 33.00f + .02f * total_sold_shares;
	}

	printf("Rival commission: $%.2f\n", rival_commission);

	return 0;
}
