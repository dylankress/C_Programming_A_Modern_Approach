#include <stdio.h>

float calculate_remaining_balance(float current_balance, float monthly_interest_rate, float monthly_payment)
{
	float new_balance = (current_balance + (current_balance * monthly_interest_rate)) - monthly_payment;
	return new_balance;
}

int main(void)
{
	float loan_amount = 0.0f;
	float interest_rate = 0.0f;
	float monthly_payment = 0.0f;
	float monthly_interest_rate = 0.0f;

	printf("Enter loan amount... ");
	scanf("%f", &loan_amount);

	printf("Enter interest rate... ");
	scanf("%f", &interest_rate);

	printf("Enter monthly payment... ");
	scanf("%f", &monthly_payment);

	monthly_interest_rate = (interest_rate * .01f) / 12.0f;

	float balance_after_first_payment = calculate_remaining_balance(loan_amount, monthly_interest_rate, monthly_payment);
	printf("Balance remaining after first payment: $%.2f\n", balance_after_first_payment);

	float balance_after_second_payment = calculate_remaining_balance(balance_after_first_payment, monthly_interest_rate, monthly_payment);
	printf("Balance remaining after second payment: $%.2f\n", balance_after_second_payment);

	float balance_after_third_payment = calculate_remaining_balance(balance_after_second_payment, monthly_interest_rate, monthly_payment);
	printf("Balance remaining after third payment: $%.2f\n", balance_after_third_payment);

	return 0;
}


