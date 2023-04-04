#include "main.h"
#include <stdio.h>

/**
 * print_diagsums()- function that prints the sum of the two diagonals
 * @a: parameter
 * @size: parameter
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int z;
	unsigned int value = 0;
	unsigned int value1 = 0;

	for (z = 0; z < size; z++)
	{
		value = value + a[(size * z) + z];
		value1 = value1 + a[(size * (z + 1)) - (z + 1)];
	}
	printf("%d, %d\n", value, value1);
}
