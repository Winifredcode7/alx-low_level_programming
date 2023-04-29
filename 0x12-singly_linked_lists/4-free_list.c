#include <stdlib.h>
#include "lists.h"

/**
 * free_list - the job is to free a linked list
 * @head: this is the  list_t list to be freed
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
