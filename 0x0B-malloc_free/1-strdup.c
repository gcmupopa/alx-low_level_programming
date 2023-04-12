#include "main.h"
#include <stdlib.h>


/**
 * _strdup- returns a pointer to a newly allocated space
 * @str: parameter
 * Return: a pointer
 */

char *_strdup(char *str)
{
	unsigned int i = 0;
	unsigned int length = 0;
	char *ptrstr;

	if (ptrstr == NULL)
	{
		return (NULL);
	}

	while (str[length])
		length++;

	ptrstr = malloc((sizeof(char) * (length + 1));

	if (ptrstr == NULL)
		return (NULL);

	while ((ptrstr[i] = str[i] != '\0'))
			i++;

	return (ptrstr);
}
