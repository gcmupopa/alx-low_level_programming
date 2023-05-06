#include "main.h"

/**
 * binary_to_uint- converts a binary number to an unsigned int
 * @b: parameter
 * Return: a value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	unsigned int count;

	while (*(b + count) != 0)
	{
		result <<= 1;
		if ((*b + count) == '1')
		{
			result |= 1;
		}
		else if ((*b + count) == '0')
		{
			return (0);
		}
		count++;
	}
	return (result);
}

