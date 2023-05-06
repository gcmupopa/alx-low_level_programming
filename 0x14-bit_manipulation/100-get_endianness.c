#include "main.h"

/**
 * get_endianness- checks the endianness
 * Return: 0 else 1
 */

int get_endianness(void)
{
	unsigned int endicheck;
	char *gc;

	endicheck = 1;
	gc = (char *) &endicheck;

	if (*gc)
		return (1);
	else
		return (0);
}
