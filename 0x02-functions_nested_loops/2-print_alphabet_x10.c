#include "main.h"

/**
 * Description - this prints the alphabet 10 times
 * Return: This returns string value
 */

void print_alphabet_x10(void)
{
	int i = 0;
	int j = 97;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
