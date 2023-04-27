#include "lists.h"

/**
 *add_node_end - adds a new node at the end of list.
 *@head: contains base address of the list
 *@str: string to be added to linked list
 *Return: address of the new element, or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_n, *c_n;

	n_n = malloc(sizeof(list_t));

	if (n_n == NULL)
		return (NULL);

	n_n->str = strdup(str);

	if (n_n->str == NULL)
	{
		free(n_n);
		return (NULL);
	}
	n_n->len = strlen(str);
	n_n->next = NULL;

	if (*head == NULL)
	{
		*head = n_n;
		return (n_n);
	}
	c_n = *head;

	while (c_n->next != NULL)
		c_n = c_n->next;
	c_n->next = n_n;
	return (n_n);
}


