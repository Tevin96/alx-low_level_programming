#include "main.h"
#include <stdio.h>
/**
 * _strchr - a function that locates a character in a string
 * @c: character
 * @s: string
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}
	return (NULL);
}
