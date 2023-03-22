#include "main.h"

/**
 * _isalpha - print a value
 * @c: parameter to be checked
 * Description: checks if letter is lowercase oe uppercase
 * Return: This returns 0 or 1
 */

int _isalpha(int c)
{
	int c;

	if ((c >= 65 && c < 97) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
