#include "main.h"
/**
 * print_number - a function that prints an integer
 * @n: integer to be printed
 * Return: void
 */
void print_number(int n)
{
unsigned int i = n;

if (n < 0)
{
_putchar('-');
i = -i;
}

if ((i / 10) > 0)
print_number(1 / 10);
_putchar((i % 10) + '0');
}

