#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index- searches for an integer
 * @array: parameter
 * @size: parameter
 * @cmp: parameter
 * Return: a value
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int countree;

	if (cmp && array)
	{
		for (countree = 0; countree < size; countree++)
		{
			if (cmp(array[countree]) != 0)
				return (countree);
		}
	}
	return (-1);
}
