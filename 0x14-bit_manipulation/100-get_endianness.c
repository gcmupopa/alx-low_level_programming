#include "main.h"

/**
 * get_endianness()- checks endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	char *pointer;
	unsigned int cend;

	cend = 1;
	pointer = ((char *)&cend);
	if (*pointer == 1)
		return (1);
	else
		return (0);
}

