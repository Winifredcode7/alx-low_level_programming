#include "main.h"

/**
 * _strlen - returns the string lenght
 * @s: string whose lenght is to be printed
 *Return: lenght of the string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		count++;
	}
	return (count);
}
