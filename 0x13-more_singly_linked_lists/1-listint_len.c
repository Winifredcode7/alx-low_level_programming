#include "lists.h"

/**
 * listint_len - this funcion returns the num of elements in a linked lists
 * @h: this is the  linked list of type listint_t to traverse
 *
 * Return: returns number of nodes
 * Winifredcode7
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
