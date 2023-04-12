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

	ptrArr = (char *)malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		ptrArr[i] = c;
	}
	return (ptrArr);
}
