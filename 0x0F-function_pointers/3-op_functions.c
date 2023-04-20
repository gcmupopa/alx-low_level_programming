#include <stdio.h>

/**
 * op_add- returns the sum of 2 numbers
 * @a: parameter
 * @b: parameter
 * Return: value
 */

int op_add(int a, int b)
{
	return (atoi(a) + atoi(b));
}

/**
 * op_sub- returns the difference of 2 numbers
 * @a: parameter
 * @b: parameter
 * Return: value
 */

int op_sub(int a, int b)
{
	return (atoi(a) - atoi(b));
}

/**
 * op_mul- returns the product of 2 numbers
 * @a: parameter
 * @b: parameter
 * Return: value
 */

int op_mul(int a, int b)
{
	return (atoi(a) * atoi(b));
}

/**
 * op_div- returns the dvision of 2 numbers
 * @a: parameter
 * @b: parameter
 * Return: value
 */

int op_div(int a, int b)
{
	return (atoi(a) / atoi(b));
}

/**
 * op_mod- returns the modulo of 2 numbers
 * @a: parameter
 * @b: parameter
 * Return: value
 */

int op_mod(int a, int b)
{
	return (atoi(a) % atoi(b));
}
