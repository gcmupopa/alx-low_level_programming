#include "main.h"

/**
 * print_binary()- prints binary represenation of a number
 * @n: number to be printed in binary
 * Return: a value
 */

void print_binary(unsigned long int n)
{
	int i, mask;

	for (i = 15; i >= 0; i--)
	{
		mask = 1 << i;
		if ((n&mask) == 0)
			_putchar('0');
		else
			_putchar('1');
	}
}
