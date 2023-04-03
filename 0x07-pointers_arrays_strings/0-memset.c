#include "main.h"

/**
 * _memset - Entry point
 * @n: bytes of the memory area pointed to
 * @s: pointer pointing to n
 * @b: constant byte
 * Return: always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b;
	return (s);
}
