#include "lists.h"

/**
 * print_dlistint- prints all elements of the list
 * @h: parameter
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t number_nodes = 0;
	const dlistint_t *ptr;
	
	ptr = malloc(sizeof(dlistint_t));
	ptr = h;
	if (ptr == NULL)
		return (1);
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		number_nodes += 1;
		ptr = ptr->next;
	}
	return (number_nodes);
}
