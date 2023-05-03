#include "lists.h"

/**
 * get_nodeint_at_index - this function  returns the node
 * at a certain index in a linked list
 * @head: stands for the first node in the linked list
 * @index: this is the  index of the node to return
 *Winifredcode7
 * Return: pointer to the node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
