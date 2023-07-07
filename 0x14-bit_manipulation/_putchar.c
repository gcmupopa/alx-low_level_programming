#include "main.h"

/**
 * _putchar- prints characters
 * @a: parameter
 * Return: character to be printed
 */

int _putchar(char a)
{
	return write(1, &a, 1);
}
