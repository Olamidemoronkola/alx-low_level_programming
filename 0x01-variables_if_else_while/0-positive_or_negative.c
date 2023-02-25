/*
 *Project : Tell if number is postive or negative||Author to complete pre-code: Olamide Moronkola
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints whether number is postive, negative or Zero
 *
 * return: o
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d\n", n);

	if(n>0)
		printf("%d is positive number", n);
	else if(n<0)
		printf("%d is negative number", n);
	else
		printf("%d is zero", n);

	return (0);
}
