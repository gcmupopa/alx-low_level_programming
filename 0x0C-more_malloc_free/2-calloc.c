#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc- allocates memory for an array
 * @nmemb: parameter
 * @size: parameter
 * Return: pointer else null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptrc = (int *)calloc(nmemb, size);

	if (ptrc == NULL)
	{
		return (NULL);
	}
	return (ptrc);
}
