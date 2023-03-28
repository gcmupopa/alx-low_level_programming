#include "main.h"

/**
 * puts_half - Resetting a value
 * @str: parameter
 * Return: a value
 */

int _strlen(char *str);
void puts_half(char *str)
{
	int length = _strlen(str);
	int mid = length / 2;
	int n = (length - 1) / 2;
	int i;

	for (i = mid; i <= str[i]; i++)
	{
		if (length % 2 == 0)
			_putchar(str[i]);
		else
			_putchar(n);
	}
}

/**
 * _strlen - Resetting a value
 * @str: parameter
 * Return: a value
 */

int _strlen(char *str)
{
	int counter = 0;

	while (*str != '\0')
	{
		str++;
		counter++;
	}
	return (counter);
}

