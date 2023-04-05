#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion()- function returns square root of number
 * @n: parameter
 * Return: a value
 */

int _sqrt_recursion(int n)
{
	if (n % 0 !=  0)
		return (-1);
	else
		return (n * _sqrt_recursion(n - 1));
}
