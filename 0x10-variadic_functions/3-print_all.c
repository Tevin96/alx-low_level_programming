#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int c = 0;
	char *str, *sep = "";

	va_start(list, format);

	if (format)
	{
		while (format[c])
		{
			switch (format[c])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
				break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
				break;
				case 'f':
					 printf("%s%f", sep, va_arg(list, double));
				break;
				case 's':
				str = va_arg(list, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
				default:
				c++;
				continue;
			}
			sep = ", ";
			c++;
		}
	}
	printf("\n");
	va_end(list);
}
