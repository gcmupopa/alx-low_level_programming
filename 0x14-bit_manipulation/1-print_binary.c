#include "main.h"

/**
 * print_binary()- prints binary represenation of a number
 * @n: number to be printed in binary
 * Return: a value
 */

void print_binary(unsigned long int n)
{
	int bit_pos, j, i, mask;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n == 1)
	{
		_putchar('1');
		return;
	}
	for (i = 15; i >= 0; i--)
	{
		mask = 1 << i;
		if ((n & mask) != 0)
		{
			bit_pos = i;
			break;
		}
	}

	for (j = bit_pos; j >= 0; j--)
	{
		mask = 1 << j;
		if ((n & mask) == 0)
		{
			_putchar('0');
		}
		else
		{
			_putchar('1');
		}
	}
}
