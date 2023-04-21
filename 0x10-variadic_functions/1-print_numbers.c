#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers- prints numbers followed by new line
 * @separator: parameter
 * @n: parameter
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	int value;

	va_list numlist;

	va_start(numlist, n);

	if (separator != NULL)
	{
		for (count = 0; count < n; count++)
		{
			value = va_arg(numlist, int);
			printf("%d", value);
			if (count < n - 1)
			{
				printf("%s", separator);
			}
		}
		printf("\n");
	}
	va_end(numlist);
}
