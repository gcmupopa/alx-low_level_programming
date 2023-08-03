#include "main.h"
/**
 * clear_bit()- sets value of bit to zero at qiven index
 * @n: pointer to sn integer to be cleared
 * @index: index of bit to be cleared
 * Return: 1 or -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask;
	mask = 1 << index;
	*n = *n & ~mask;
	if (((*n) << index) == 0)
		return (1);
	else
		return (-1);
}
