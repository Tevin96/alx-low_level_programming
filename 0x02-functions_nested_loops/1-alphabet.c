#include "main.h"
/**
 * main - A function that prints the alphabets in lowercase
 *
 * Return: void
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
