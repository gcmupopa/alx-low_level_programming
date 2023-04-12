#include "main.h"
#include <stdlib.h>

char *_strdup(char *str);

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
 * _strdup- returns a pointer to a newly allocated space
 * @str: parameter
 * Return: a pointer
 */

char *_strdup(char *str)
{
	int i;
	int len = _strlen(str);
	char *ptrstr = ((char *)malloc(len * sizeof(char)) + 1);

	if (ptrstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; (str[i] != '\0'); i++)
	{
		ptrstr[i] = str[i];
	}
	ptrstr[i] = '\0';
	return (ptrstr);
}
