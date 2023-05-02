#include "lists.h"

/**
 * add_nodeint_end- adds new node at end
 * @head: parameter
 * @n: parameter
 * Return:pointer to the new elements
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endnode;
	listint_t *tempoptr;

	endnode = malloc(sizeof(listint_t));
	if (endnode == NULL)
	{
		return (NULL);
	}

	endnode->n = n;
	endnode->next = NULL;

	if (*head == NULL)
	{
		*head = endnode;
		return (endnode);
	}

	tempoptr = *head;

	while (tempoptr->next != NULL)
	{
		tempoptr = tempoptr->next;
	}
	tempoptr->next = endnode;

	return (endnode);
}
