#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: string
 * @src: source string
 * @n: bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0, src_j = 0;

while (src[i++])
src_j++;

for (i = 0; src[i] && i < n; i++)
dest[i] = src[i];

for (i = src_j; i < n; i++)
dest[i] = '\0';
return (dest);
}
