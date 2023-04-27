#include "lists.h"

/**
  * add_node - adds a new node at the beginning of a list
  * @head: contains address of the first node
  * @str: string
  * Return: address of new element, or NULL if failed
  * str needs to be duplicated
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n_n;

	if (head == NULL || str == NULL)
		return (NULL);

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
	n_n->next = *head;
	*head = n_n;

	return (n_n);
}
