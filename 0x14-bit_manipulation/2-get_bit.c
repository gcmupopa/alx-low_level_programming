#include "main.h"

/**
 * get_bit- returns the value of a bit at a given index
 * @n: parameter
 * @index: parameter
 * Return: a value else -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bitint;

	bitint = n >> index;

	return ((int)bitint);
}
