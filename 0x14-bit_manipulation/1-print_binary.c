#include "main.h"

/**
 * print_binary- prints the binary representation of a number
 * @n: parameter
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int count;

	for (count = sizeof(unsigned long int) * 8 - 1; count >= 0; count--)
	{
		if ((n >> count) & 1)
			_putchar('1' + '0');
		else
			_putchar('0' + '0');
	}
	_putchar('\n');
}
