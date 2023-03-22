#include "main.h"

/**
 * @c: input parameter
 * Description: prints all the alphabets in lowercase
 * Return: This returns 1 if c is lowercase else 0
 */

int _islower(int c)
{
	int c = 97;

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
