#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the listint_t list.
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
{
	printf("%d\n", h->n);
	h = h->next;
	i++;
}
return (i);
}
