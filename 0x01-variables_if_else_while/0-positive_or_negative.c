/*
 *Project : Tell if number is postive or negative||Author to complete pre-code: Olamide Moronkola
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Main - prints whether number is postive, negative or Zero
 *
 * Return: always 0.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
