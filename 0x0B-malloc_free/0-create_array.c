#include <stdlib.h>
#include "main.h"

/**
 * create_array- creates an array of chars
 * @size: parameter
 * @c: parameter
 * Return: a pointer
 */

char *create_array(unsigned int size, char c)
{
	char *ptrArr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	if (size > 0)
	{
		ptrArr = (char *)malloc(size * sizeof(char));

		if (ptrArr == NULL)
			return (NULL);
		for (i = 0; i < size; i++)
		{
			ptrArr[i] = c;
		}
	}
	return (ptrArr);
}
