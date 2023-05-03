#include "lists.h"

/**
 * free_listint - the function that frees a linked list
 * @head: this  listint_t list to be freed
 * Winifredcode7
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
