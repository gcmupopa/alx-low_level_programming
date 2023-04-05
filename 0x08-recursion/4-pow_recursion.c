#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion()- function returns value of x raised to y
 * @x: parameter
 * @y: parameter
 * Return: -1 if y is less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y <= 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
