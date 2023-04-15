#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc- reallocates a memory block using malloc
 * @ptr: parameter
 * @old_size: parameter
 * @new_size: parameter
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptrn = NULL;

	if (new_size == 0)
	{
		free(ptrn);
		return (NULL);
	}
	if (ptrn == NULL)
	{
		ptrn = malloc(new_size);
	}
	else if (new_size <= old_size)
	{
		return (ptrn);
	}
	else
	{
		ptrn = malloc(new_size);
		if (ptrn != NULL)
		{
			_memcpy(ptrn, ptr, old_size);
			free(ptr);
		}
	}
	return (ptrn);
}

/**
 * _memcpy()- Resetting a value
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (dest == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
