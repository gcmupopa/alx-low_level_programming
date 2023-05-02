#include "lists.h"

/**
 * pop_listint- deletes head node of linked list
 * @head: parameter
 * Return: a value
 */

int pop_listint(listint_t **head)
{
	listint_t *tempoptr;
	int container;

	if (*head == NULL)
		return (0);

	tempoptr = *head;
	container = tempoptr->n;
	*head = tempoptr->next;
	free(tempoptr);
	return (container);
}
