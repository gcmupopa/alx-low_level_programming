#include "main.h"

/**
 * swap_int - Resetting a value
 * @a: parameter 1
 * @b: parameter 2
 * Return: a valuee
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = (*a);
	(*a) = (*b);
	(*b) = temp;
}
