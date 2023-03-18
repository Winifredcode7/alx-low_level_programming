#include <stdio.h>

/**
 *main - prints the alphabets in lowercase.
 *
 * Returns: always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
