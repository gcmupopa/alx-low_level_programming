#include "main.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2);

/**
 * _strlen - measures length of a string
 * @s: parameter
 * Return: a value
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}

/**
 * str_concat- function that concatenates two strings
 * @s1: parameter
 * @s2: parameter
 * Return: a pointer
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	int len1 = _strlen(s1);
	int len2 = _strlen(s2);
	int le3 = len1 + len2;

	char *ptr = (char *)malloc((le3 * sizeof(char)) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	while (i < le3)
	{
		if (i <= len1)
			ptr[i] = s1[i];
		if (i >= len1)
		{
			ptr[i] = s2[j];
			j++;
		}
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

