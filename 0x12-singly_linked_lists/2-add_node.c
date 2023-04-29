#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - this  adds a new node at the beginning of a linked list
 * @head: the double pointer to the list_t list
 * @str: the  string that would be  added in the node
 *
 * Return: the address of the new element, or NULL if it fails.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		return (NULL);
	}

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
