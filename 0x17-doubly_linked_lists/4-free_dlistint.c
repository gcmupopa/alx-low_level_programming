#include "lists.h"

/**
 * free_dlistint- frees a list
 * @head: parameter
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *freeptr;
	dlistint_t *node;

	node = head;

	while (node != NULL)
	{
		freeptr = node->next;
		free(node);
		node = freeptr;
	}
}
