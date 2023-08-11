#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte
 * @n: bytes of the memory
 * @s: pointed area
 * @b: constant byte
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a = 0;

for (a = 0; a < n; a++)
a[s] = b;
return (s);
}
