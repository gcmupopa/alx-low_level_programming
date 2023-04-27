#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node- addsnew node to a list
 * @head: parameter
 * @str: parameter
 * Return: pointer to new node
 */

list_t *add_node(list_t **head, const char *str)
{
	char *s_pointer;
	int counter = 0;
	list_t *ptr;

	if (head == NULL && str == NULL)
	{
		return (NULL);
	}
	else
	{
		s_pointer = (char *)str;
		while (*s_pointer++)
			counter++;
				
		ptr = malloc(sizeof(list_t));
		if (ptr != NULL)
		{
			ptr->str = strdup(str);
			ptr->len = counter;
			ptr->next = *head;
			
			*head = ptr;
			
			return (ptr);
		}
	}
	return (0);
}
