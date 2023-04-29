#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - this  adds a new node at the beginning of a linked list
 * @head: the double pointer to the list_t list
 * @str: the  string that would be  added in the node
 *
 * Return:  NULL if it fails or returns address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}

	return (new_node);
}
