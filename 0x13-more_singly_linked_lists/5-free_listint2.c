#include "lists.h"

/**
 * free_listint2- frees a list
 * @head: parameter
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *freeptr, *node;

	if (*head == NULL)
		return;

	node = *head;

	while (node != NULL)
	{
		freeptr = node;
		node = node->next;
		free(freeptr);
	}
}
