#include "main.h"

/**
 * flip_bits- returns number of bits to flip
 * @n: parameter
 * @m: parameter
 * Return: a value
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int masked;
	unsigned int keeper;

	masked = n ^ m;
	keeper = 0;
	while (masked != 0)
	{
		keeper += masked & 1;
		masked >>= 1;
	}
	return (keeper);
}
