#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings- prints a string followed by new line
 * @separator: parameter
 * @n: parameter
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count;

	va_list strlist;

	va_start(strlist, n);

	if (separator != NULL)
	{
		for (count = 0; count < n; count++)
		{
			const char *str = va_arg(strlist, const char *);
			
			printf("%s", str);
			
			if (count < n - 1)
				printf("%s", separator);
		}
		printf("\n");
	}
	va_end(strlist);
}
