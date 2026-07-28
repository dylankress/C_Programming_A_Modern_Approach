#include <stdio.h>

int main(void)
{
	float loan_amount, interest_rate, monthly_payment, monthly_interest_rate, remaining_balance;
	int number_of_payments, i;

	printf("Enter loan amount... ");
	scanf("%f", &loan_amount);

	printf("Enter interest rate... ");
	scanf("%f", &interest_rate);

	printf("Enter monthly payment... ");
	scanf("%f", &monthly_payment);

	printf("Enter number of payments... ");
	scanf("%d", &number_of_payments);

	monthly_interest_rate = (interest_rate * .01f) / 12.0f;
	remaining_balance = loan_amount;

	for (i = 1; i <= number_of_payments; i++) {
		remaining_balance = (remaining_balance + monthly_interest_rate) - monthly_payment;
		printf("Remaining balance after %d payment(s): $%.2f\n", i, remaining_balance);
	}

	return 0;
}


