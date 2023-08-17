#include "lists.h"

/**
 * sum_dlistint- returns sum of all data(n) in linked list
 * @head: parameter
 * Return: a value
 */

int sum_dlistint(dlistint_t *head)
{
	int sum_n = 0;
	dlistint_t *ptr;

	ptr = head;

	while (ptr != NULL)
	{
		sum_n += ptr->n;
		ptr = ptr->next;
	}
	return (sum_n);
}
