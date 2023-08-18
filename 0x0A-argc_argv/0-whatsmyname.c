#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints its name
 * @argc: number
 * @argv: array
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%d\n", *argv[0]);
	return (0);
}
