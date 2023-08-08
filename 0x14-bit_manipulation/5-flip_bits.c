#include "main.h"

/**
 * flip_bits()- returns number of bits you would to flip
 * @n: parameter
 * @m: parameter
 * Return: a value
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long count, xor_ot;

	xor_ot = m ^ n;
	count = 0;
	while (xor_ot != 0)
	{
		count += xor_ot & 1;
		xor_ot >>= 1;
	}
	return (count);
}

