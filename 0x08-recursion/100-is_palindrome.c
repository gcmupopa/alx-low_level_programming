#include "main.h"

int pali_check(char *s, int n, int len);
int _strleng_recursion(char *s);

/**
 * is_palindrome()- checks if string is palindrome recursive
 * @s: parameter
 * Return: 1 if palindrome, else 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (pali_check(s, 0, _strleng_recursion(s)));
}


/**
 * _strleng_recursion()- checks length of string
 * @s: parameter
 * Return: length of string
 */

int _strleng_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strleng_recursion(s + 1));
}

/**
 * pali_check()- check character if palindrome recursive
 * @s: parameter
 * @n: parameter
 * @len: parameter
 * Return: 1 if palindrome, else 0
 */

int pali_check(char *s, int n, int len)
{
	if (*(s + n) != *(s + len - 1))
		return (0);
	if (n >= len)
		return (1);
	return (pali_check(s, n + 1, len - 1));
}

