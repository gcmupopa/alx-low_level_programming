#include "lists.h"

/**
 * add_nodeint- adds a new node at the beginning of linked list
 * @head: parameter
 * @n: parameter
 * Return: pointer to new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nodenew;

	nodenew = malloc(sizeof(listint_t));

	if (nodenew == NULL)
		return (NULL);

	nodenew->n = n;
	nodenew->next = *head;

	if (nodenew != NULL)
	{
		*head = nodenew;
	}
	return (*head);
}
