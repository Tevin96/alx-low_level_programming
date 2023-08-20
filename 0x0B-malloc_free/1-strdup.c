#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string
 * Return: a pointer to the duplicated string
 * NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	int a = 0, b = 1;
	char *c;

	if (str == NULL)
		return (NULL);

	while (str[b])
		b++;

	c = malloc((sizeof(char) * b) + 1);

	if (c == NULL)
		return (NULL);

	while (a < b)
	{
		c[a] = str[a];
		a++;
	}
	c[a] = '\0';
	return (c);
}
