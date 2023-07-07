#include "main.h"

/**
 * set_bit()- sets value of bit to 1 at given index
 * @n: pointer to integer with bit to be set
 * @index: index starting from 0 of the bit you want to set
 * Return: 1 or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int mask = 1 << index;
	*n = (*n) | mask;
	if (((*n) << index) == 1)
		return (1);
	else
		return (-1);
}
