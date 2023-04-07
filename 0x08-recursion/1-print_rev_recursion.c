#include "main.h"

/**
 *_print_rev_recursion - write a function that prints in reverse
 *@s: the string to print
 *Return: Always 0
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
