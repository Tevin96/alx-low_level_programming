#include "main.h"

int is_pal(char *s, int a, int b);

/**
 * _strlen_recursion - returns length of a string
 * @s: string
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 *is_palindrome - returns 1 if a string is a palindrome and 0 if not
 *@s: string
 *Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (is_pal(s, 0,  _strlen_recursion(s) - 1));
}

/**
 * is_pal - checks the characters for palindrome
 * @s: string
 * @a: iterator
 * @b: length of a strimg
 * Return: returns 1 if a string is a palindrome and 0 if not
 */
int is_pal(char *s, int a, int b)
{
	if (*(s + a) == *(s + b))
	{
		if (a == b || a == b + 1)
			return (1);
		return (0 + is_pal(s, a + 1, b - 1));
	}
	return (0);
}
