#include <stdio.h>

int main(void)
{
	float x = 0.0f;

	printf("Enter a value for x... ");
	scanf("%f", &x);

	float polynomial = (((((3.0f * x) + 2.0f) * (1.0f * x) - 5.0f) * (1.0f * x) - 1.0f) * (1.0f * x) + 7.0f) * (1.0f * x) - 6.0f;

	printf("The value of the polynomial is %f.\n", polynomial);

	return 0;
}
