#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n).
 * @head: pointer to the head of the list
 *
 * Return: sum of all the data in the list, 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

		while (head != NULL)
	{
	sum += head->n;
	head = head->next;
	}

	return (sum);
}
