#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: array
 * @size: bytes
 * Return: NULL if nmemb or size is 0
 * NULL if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);

	for (a = 0; a < nmemb * size; a++)
		s[a] = 0;
	return (s);
}
