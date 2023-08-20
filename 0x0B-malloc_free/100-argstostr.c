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
	int a, b, c, d = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (a < ac)
	{
		while (av[a][b])
		{
			c++;
			b++;
		}
		b = 0;
		a++;
	}
	s = malloc((sizeof(char) * c) + ac + 1);

	a = 0;
	while (av[a])
	{
		while (av[a][b])
	{
			d++;
				b++;
	}
	s[d] = '\n';

	b = 0;
	d++;
	a++;
	}
	d++;
	s[d] = '\0';
	return (s);
}
