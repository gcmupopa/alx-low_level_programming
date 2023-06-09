#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion()- function that returns length of a string recursively
 * @s: parameter
 * Return: nothing
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
