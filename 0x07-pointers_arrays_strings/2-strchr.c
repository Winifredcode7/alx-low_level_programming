#include <stdio.h>
#include "main.h"

/**
 * _strchr - Entry point
 *@s: pointer to the first occurrence of the character
 *@c: character that is pointed at
 *Return: always 0
 */

char *_strchr(char *s, char c)
{
	int i
	for (i = 0 ; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
