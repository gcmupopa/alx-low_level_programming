#include "main.h"
/**
 * set_bit()- sets value of bit to 1 at qiven index
 * @n: pointer to integer with bit to be set
 * @index: index starting from o of the bit you want to set
 * Return: 1 or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int mask;

	mask = 1 << index;
	*n = *n | mask;

	if (((*n) << index) == 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
