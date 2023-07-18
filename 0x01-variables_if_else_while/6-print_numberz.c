#include <stdio.h>
/**
 *main - A program that prints all single digit numbers with putchar
 *Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + 48);
	}
	putchar('\n');
	return (0);
}
