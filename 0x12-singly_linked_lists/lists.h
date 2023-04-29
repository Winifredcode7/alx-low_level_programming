#ifndef LISTS_H
#define LISTs_H


/**
 * struct list_s - this is the singly linked list
 * @str: string - (the malloc'ed string)
 * @len: len for  length of the string
 * @next: this  points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
size_t list_len(const list_t *h);
size_t print_list(const list_t *h);

#endif
