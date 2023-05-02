#include "lists.h"

/**
 * reverse_listint- reverses linked list
 * @head: parameter
 * Return: pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *pointer1, *pointer2, *pointer3;

	if (*head == NULL)
		return (0);

	pointer1 = *head;
	pointer2 = pointer1->next;
	pointer3 = pointer2->next;

	pointer1->next = NULL;
	pointer2->next = pointer1;

	while (pointer3 != NULL)
	{
		pointer1 = pointer2;
		pointer2 = pointer3;
		pointer3 = pointer3->next;
		pointer2->next = pointer1;
	}
	*head = pointer2;
	return (*head);
}
