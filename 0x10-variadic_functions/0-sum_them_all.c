#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number
 * Return: 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int c, sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (c = 0; c < n; c++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
