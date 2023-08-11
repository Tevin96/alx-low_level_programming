#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @n: bytes
 * @src: from memory area
 * @dest: to memory area
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a = 0;

for (a = 0; a < n; a++)
	dest[a] = src[a];

return (dest);
}
