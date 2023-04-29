#include <stdio.h>
#include "lists.h"

/**
 * print_list - the job is to prints all the elements of a linked list
 * @h: this is a  pointer to the list_t list to print
 * Return: the number of nodes printed without fail.
 * Winifredcode7 code
 */

size_t print_list(const list_t *h)
{
	size_t W = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		W++;
		h = h->next;
	}

	return (W);
}
