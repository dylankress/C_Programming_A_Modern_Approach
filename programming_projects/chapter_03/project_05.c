#include <stdio.h>

int main(void)
{
	int value_position1_1 = 0;
	int value_position1_2 = 0;
	int value_position1_3 = 0;
	int value_position1_4 = 0;
	int value_position2_1 = 0;
	int value_position2_2 = 0;
	int value_position2_3 = 0;
	int value_position2_4 = 0;
	int value_position3_1 = 0;
	int value_position3_2 = 0;
	int value_position3_3 = 0;
	int value_position3_4 = 0;
	int value_position4_1 = 0;
	int value_position4_2 = 0;
	int value_position4_3 = 0;
	int value_position4_4 = 0;

	int row1_sum = 0;
	int row2_sum = 0;
	int row3_sum = 0;
	int row4_sum = 0;

	int column1_sum = 0;
	int column2_sum = 0;
	int column3_sum = 0;
	int column4_sum = 0;

	int diagonal1_sum = 0;
	int diagonal2_sum = 0;

	printf("Enter the numbers from 1 to 16 in any order... ");
	scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &value_position1_1, &value_position1_2, &value_position1_3, &value_position1_4, &value_position2_1, &value_position2_2, &value_position2_3, &value_position2_4,
			&value_position3_1, &value_position3_2, &value_position3_3, &value_position3_4, &value_position4_1, &value_position4_2, &value_position4_3, &value_position4_4);

	row1_sum = value_position1_1 + value_position1_2 + value_position1_3 + value_position1_4;
	row2_sum = value_position2_1 + value_position2_2 + value_position2_3 + value_position2_4;
	row3_sum = value_position3_1 + value_position3_2 + value_position3_3 + value_position3_4;
	row4_sum = value_position4_1 + value_position4_2 + value_position4_3 + value_position4_4;

	column1_sum = value_position1_1 + value_position2_1 + value_position3_1 + value_position4_1;
	column2_sum = value_position1_2 + value_position2_2 + value_position3_2 + value_position4_2;
	column3_sum = value_position1_3 + value_position2_3 + value_position3_3 + value_position4_3;
	column4_sum = value_position1_4 + value_position2_4 + value_position3_4 + value_position4_4;

	diagonal1_sum = value_position1_1 + value_position2_2 + value_position3_3 + value_position4_4;
	diagonal2_sum = value_position4_1 + value_position3_2 + value_position2_3 + value_position1_4;

	printf("%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n", value_position1_1, value_position1_2, value_position1_3, value_position1_4, value_position2_1, value_position2_2,
			value_position2_3, value_position2_4, value_position3_1, value_position3_2, value_position3_3, value_position3_4, value_position4_1, value_position4_2, value_position4_3, value_position4_4);
	
	printf("Row sums: %d %d %d %d\n", row1_sum, row2_sum, row3_sum, row4_sum);
	printf("Column sums: %d %d %d %d\n", column1_sum, column2_sum, column3_sum, column4_sum);
	printf("Diagonal sums: %d %d\n", diagonal1_sum, diagonal2_sum);

	return 0;
}
