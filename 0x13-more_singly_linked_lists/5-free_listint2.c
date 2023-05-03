#include "lists.h"

/**
 * free_listint2 - this function  frees a linked list
 * @head: this is the pointer to the listint_t list to be freed
 *Winifredcode7
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
