#include <stdlib.h>
#include "lists.h"

/**
 * free_list - the job is to free a linked list
 * @head: this is the  list_t list to be freed
 */

void free_list(list_t *head)
{
	list_t *current, *temp;

	current = head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp->str);
		free(temp);
	}
}
