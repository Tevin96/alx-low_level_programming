#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse
 * @s: - string
 * Return: 0 (Success)
 */
void print_rev(char *s)
{
int i = 0;

while (*s != '\0')
{
i++;
s++;
}
s--;
for (i = i - 1; i >= 0; i--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
