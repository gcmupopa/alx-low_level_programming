#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all- function that prints anything
 * @format: parameter
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	const char *ptr = format;
	char c;
	int i;
	double f;
	const char *s;

	va_list plist;

	va_start(plist, format);

	while (*ptr)
	{
		switch (*ptr)
		{
			case 'c':
				c = va_arg(plist, int);
					printf("%c, ", c);
					break;
			case 'i':
				i = va_arg(plist, int);
					printf("%d, ", i);
					break;
			case 'f':
				f = va_arg(plist, double);
					printf("%f, ", f);
					break;
			case 's':
				s = va_arg(plist, const char *);
					if (s == NULL)
						printf("nil");
					else
						printf("%s", s);
					break;
		}
		ptr++;
	}
	printf("\n");
	va_end(plist);
}
