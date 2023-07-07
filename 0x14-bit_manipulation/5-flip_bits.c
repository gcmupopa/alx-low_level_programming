#include "main.h"
#include <stddef.h>

/**
 * flip_bits()- returns number of bits you would to flip
 * @n: parameter
 * @m: parameter
 * Return: a value
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long xor_outc, count;

	xor_outc = n ^ m;
	count = 0;
	while (xor_outc != 0)
	{
		count += xor_outc & 1;
		xor_outc >>= 1;
	}
	return (count);
}
