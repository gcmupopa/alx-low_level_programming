#include "main.h"
#include <stddef.h>

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
