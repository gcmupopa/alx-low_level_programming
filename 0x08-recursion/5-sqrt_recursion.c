#include "main.h"
#include <stdio.h>

int first_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion()- function returns square root of number
 * @n: parameter
 * Return: a value
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (first_sqrt_recursion(n, 0));
}

/**
 * first_sqrt_recursion()- recursion to find root of natural number
 * @n: parameter
 * @i: parameter
 * Return: square root
 */

int first_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (first_sqrt_recursion(n, i + 1));
}
