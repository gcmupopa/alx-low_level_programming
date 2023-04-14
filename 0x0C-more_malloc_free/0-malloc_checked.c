#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked- allocates memory
 * @b: parameter
 * Return: pointer else exit (98)
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b * sizeof(int));

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
