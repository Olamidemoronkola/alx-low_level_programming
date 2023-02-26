/**
 * main - Prints all the numbers of base sixteen in lowercase.
 *
 * Return: Always zero.
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
		putchar((num % 16) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
