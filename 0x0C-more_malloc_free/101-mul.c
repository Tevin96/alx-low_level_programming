#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * isNumber - checks if a string is a number
 * @s: string
 * Return: 1 if number, 0 otherwise
 */
int isNumber(char *s)
{
	int a;

	for (a = 0; s[a]; a++)
		if (s[a] < '0' || s[a] > '9')
			return (0);
	return (1);
}

/**
 * print_result - prints the result of the multiplication
 * @result: array
 * @length: length of the result
 * Return: void
 */
void print_result(int *result, int length)
{
	int a;

	for (a = 0; a < length && result[a] == 0; a++)
		;

	if (a == length)
		printf("0");

	for (; a < length; a++)
		printf("%d", result[a]);

	printf("\n");
}

/**
 * main - multiplies two positive numbers
 * @argc: number
 * @argv: array
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	int a, b, num1_length, num2_length;
	int *result;

	if (argc != 3 || !isNumber(argv[1]) || !isNumber(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	num1_length = strlen(argv[1]);
	num2_length = strlen(argv[2]);

	result = calloc(num1_length + num2_length, sizeof(int));
	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	for (a = num1_length - 1; a >= 0; a--)
	{
		for (b = num2_length - 1; b >= 0; b--)
		{
			int mul = (argv[1][a] - '0') * (argv[2][b] - '0');

			int sum = result[a + b + 1] + mul;

			result[a + b] += sum / 10;
			result[a + b + 1] = sum % 10;
		}
	}

	print_result(result, num1_length + num2_length);
	free(result);
	return (0);
}
