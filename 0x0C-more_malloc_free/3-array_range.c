#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range- creates an array of integers
 * @min: parameter
 * @max: parameter
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int i, j;
	int n = *(&max + 1) - min;
	int *Arr =(int *) malloc(n * sizeof(int));

	if (Arr == NULL)
	{
		return (NULL);
	}

	for (i = 0, j = min; i < n; i++, j++)
	{
		Arr[i] = j;
	}
	return (Arr);
}
