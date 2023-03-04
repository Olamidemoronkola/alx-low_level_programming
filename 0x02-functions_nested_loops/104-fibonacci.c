#include <stdio.h>
#define LARGEST 10000000000

/**
 * main - Holds the script for the main function 
 * Description: Find and print the first 98 f-numbers starting with 1 and 2.
 * Numbers should be coma and space separated.
 * Return: 0
 */
int main(void)
{
	unsigned long int fr = 0, bk = 1, fr1 = 0, bk1 = 2;
	unsigned long int hold1, hold2, hold3;
	int count;

	printf("%lu, %lu, ", bk, bk1);
	for (count = 2; count < 98; count++)
	{
		if (bk + bk1 > LARGEST || fr1 > 0 || fr > 0)
		{
			hold1 = (bk + bk1) / LARGEST;
			hold2 = (bk + bk1) % LARGEST;
			hold3 = fr + fr1 + hold1;
			fr = fr1, fr1 = hold3;
			bk = bk1, bk1 = hold2;
			printf("%lu%010lu", fr1, bk1);
		}
		else
		{
			hold2 = bk + bk1;
			bk = bk1, bk1 = hold2;
			printf("%lu", bk1);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
