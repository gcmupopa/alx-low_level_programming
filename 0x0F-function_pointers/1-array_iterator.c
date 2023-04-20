#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator- executes function given as parameter
 * @array: parameter
 * @size: parameter
 * @action: parameter
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int countree;

	if (array != NULL && action != NULL)

	for (countree = 0; countree < size; countree++)
	{
		action(array[countree]);
	}
}
