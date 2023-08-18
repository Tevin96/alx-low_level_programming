#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number
 * @argv: array
 * Return: 1 if receive two arguements 0 otherwise
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);
		return (0);
}
