#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: 0 (success)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int c;
	char *str;

	va_start(strings, n);
	for (c = 0; c < n; c++)
	{
		str = va_arg(strings, char*);
		if (str == NULL)
			printf("(nil)");
					else
					printf("%s", str);
			if (c < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
