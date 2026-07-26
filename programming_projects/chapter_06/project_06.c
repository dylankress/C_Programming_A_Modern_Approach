#include <stdio.h>

int main(void)
{
	int i, n;

	printf("ENter a number: ");
	scanf("%d", &n);

	printf("All even squares between 1 and your number: \n");

	for (i = 2; i * i <= n; i += 2) {
		printf("%d\n", i * i);
	}

	return 0;
}
