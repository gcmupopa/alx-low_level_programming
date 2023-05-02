#include "lists.h"

/**
 * free_listint- frees a list
 * @head: parameter
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *freeptr;
	listint_t *node;

	node = head;

	while (node != NULL)
	{
		freeptr = node->next;
		free(node);
		node = freeptr;
	}
}
