#include "main.h"
/**
 * print_number - a function that prints an integer
 * @n: integer
 * Return: 0 (Success)
 */
void print_number(int n)
{
	unsigned int n0;

	n0 = n;
	if (n < 0)
	{
		_putchar('-');
		n0 = -n;
	}
	if (n0 / 10 != 0)
	{
		print_number(n0 / 10);
	}
	_putchar((n0 % 10) + '0');
}
