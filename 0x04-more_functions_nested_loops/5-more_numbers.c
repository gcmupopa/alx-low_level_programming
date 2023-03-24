#include "main.h"

/**
 * more_numbers - prints numbers 0-14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int c;
	int c1;
	int i;

	for (i = 1; i <= 10; i++)
	{
		{
		for (c = 48; c < 58; c++)
		{
			_putchar(c);
		}

		c1 = 49;
		for (c1 = 48; c1 <= 52; c1++)
		{
			_putchar(c);
			_putchar(c1);
		}
		}
		_putchar('\n');
	}
}
