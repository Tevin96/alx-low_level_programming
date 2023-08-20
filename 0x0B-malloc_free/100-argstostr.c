#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: arguements count
 * @av: arguements vector
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i = 0, b = 0, c = 0, d = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (b < ac)
	{
		while (av[b][c])
		{
			i++;
			c++;
		}
		c = 0;
		b++;
	}
	s = malloc((sizeof(char) * i) + ac + 1);

	b = 0;
	while (av[b])
	{
		while (av[b][c])
	{
			s[d] = av[b][c];
			d++;
			c++;
	}
	s[d] = '\n';

	c = 0;
	d++;
	b++;
	}
	d++;
	s[d] = '\0';
	return (s);
}
