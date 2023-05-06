#include "main.h"

/**
 * clear_bit- sets the value of a bit to 0 at a given index
 * @n: parameter
 * @index: parameter
 * Return: 1 else 0
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int tomask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
	{
		tomask = ~(1UL << index);
		*n &= tomask;
	}
	return (1);
}
