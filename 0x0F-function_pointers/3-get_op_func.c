#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - selects the correct function
 * to perform the operation asked by the user
 * @s: operator
 * Return: NULL if s does not match
 * any of the 5 expected operators
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int a = 0;

	while (ops[a].op != NULL)
	{
		if (*s == *(ops[a].op) && *(s + 1) == '\0')
			return (ops[a].f);
		a++;
	}
	printf("Error\n");
	exit(99);
}
