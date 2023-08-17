#include "lists.h"

/**
 * add_dnodeint_end- adds new node at end
 * @head: parameter
 * @n: parameter
 * Return:pointer to the new elements
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *endnode;
	dlistint_t *tempoptr;

	endnode = malloc(sizeof(dlistint_t));
	if (endnode == NULL)
	{
		return (NULL);
	}

	endnode->n = n;
	endnode->next = NULL;

	if (*head == NULL)
	{
		endnode->prev = NULL;
		*head = endnode;
		return (endnode);
	}

	tempoptr = *head;

	while (tempoptr->next != NULL)
	{
		tempoptr = tempoptr->next;
	}
	tempoptr->next = endnode;
	endnode->prev = tempoptr;

	return (endnode);
}
