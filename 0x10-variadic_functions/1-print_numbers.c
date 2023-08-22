#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: 0 (success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int c;

	va_start(numbers, n);
	for (c = 0; c < n; c++)
	{
		printf("%d", va_arg(numbers, int));
		if (c < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
