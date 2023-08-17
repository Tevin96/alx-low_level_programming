#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: string
 * @src: string
 * @n: bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, dest_a = 0;

while (dest[i++])
        dest_a++;
{
for (i = 0; src[i] && i < n; i++)
        dest[dest_a++] = src[i];
}
return (dest);
}
