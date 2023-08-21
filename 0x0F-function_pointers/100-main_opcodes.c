#include <stdio.h>
#include <stdlib.h>

/**
 * error - prints error message and exits
 * @err: error code
 */
void error(int err)
{
	printf("Error\n");
	exit(err);
}

/**
 * main - prints the opcodes of its own main function.
 * @argc: number
 * @argv: array
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 2)
		error(1);

	b = atoi(argv[1]);
	if (b < 0)
		error(2);

	for (a = 0; a < b; a++)
	{
		printf("%02hhx", ((char *)main)[a]);
		if (a < b - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
