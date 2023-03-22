#include "main.h"

/**
 * print_last_digit - print a value
 * @n: parameter to be checked
 * Description: prints last digit of a number
 * Return: This returns string value
 */

int print_last_digit(int)
{
	int last_digit;

	if ((n % 10) < 0)
	{
		last_digit = (n % 10) * -1;
	}
	else
	{
		last_digit = n % 10;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
