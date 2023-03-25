#include "main.h"

/**
 * _isupper - checks if a letter is upper case
 * @c: the number to be checked
 * Return: 1 got upper case or 0 for otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
