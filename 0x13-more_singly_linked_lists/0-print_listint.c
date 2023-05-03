#include "lists.h"

/**
 * print_listint - this function prints all the elements of a linked list
 * @h: this is the  linked list of the type listint_t to print
 *
 * Return: returns the  number of nodes.
 * winifredcode7
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
