#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all- returns the sun of all its parameters
 * @n: parameter
 * Return: value
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int count;
	int total = 0;

	va_list list;

	va_start(list, n);

	if (n == 0)
		return (0);

	for (count = 0; count < n; count++)
	{
		total = total + va_arg(list, int);
	}
	va_end(list);
	return (total);
}
