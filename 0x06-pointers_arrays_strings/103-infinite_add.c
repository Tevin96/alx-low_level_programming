#include "main.h"
/**
 * infinite_add - a function that adds two numbers
 * @n1: number
 * @n2: number
 * r: buffer
 * size_r: buffer size
 * Return: 0 (Success)
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r);
{
	int i, j;

	int o= 0, i = 0, j = 0, d = 0;
	int v = 0, v2 = 0, t = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || o == 1)
	{
		if (i < 0)
			v1 = 0;
		else
			v1 = *(n1 + i) - '0';
		if (j < 0)
			v2 = 0;
		else
			v2 = *(n2 + j) - '0';
		t = v1 + v2 + o;
		if (t >= 10)
			o = 1;
		else
			o = 0;
		if (d >= (size_r - 1))
			return (0);
		*(r + d) = (t % 10) + '0';
		d++;
		j--;
		i--;
	}
	if (d == size_r)
		return (0);
	*(r + d) = '\0';
	rev_string(r);
	return (r);
}
