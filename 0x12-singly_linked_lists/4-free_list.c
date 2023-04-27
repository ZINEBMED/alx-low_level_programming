#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: contains base address of the list
 */
void free_list(list_t *head)
{
	list_t *c_n;

	while (head != NULL)
	{
		c_n = head;
		head = head->next;
		free(c_n->str);
		free(c_n);
	}
}
