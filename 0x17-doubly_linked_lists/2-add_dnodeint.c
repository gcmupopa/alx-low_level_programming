#include "lists.h"

/**
 * add_dnodeint()- adds a new node at the beginning of a dlistint_t list.
 * @head: parameter
 * @n: parameter
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nunode = malloc(sizeof(dlistint_t));

	if (nunode == NULL)
		return (NULL);

	nunode->n = n;
	nunode->prev = NULL;
	nunode->next = *head;

	if (*head != NULL)
		(*head)->prev = nunode;

	*head = nunode;
	return (nunode);
}
