#include "main.h"

/**
 * get_bit()- returns value of bit at given index
 * @n: number we need to get bit from
 * @index: index, starting from 0 zero of bit you want
 * Return: value of bit at index or -1 if error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;
	int mask;
	
	mask = 1 << index;
	if ((n & mask) == 0)
	{
		bit = 0;
	}

	else
	{
		bit = 1;
	}
	return (bit);
}
