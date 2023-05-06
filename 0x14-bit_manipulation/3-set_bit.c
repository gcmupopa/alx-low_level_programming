#include "main.h"

/**
 * set_bit- sets the value of a bit to 1 at a given index
 * @n: parameter
 * @index: parameter
 * Return: 1 else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	*n = *n | (1UL << index);
	return (1);
}
