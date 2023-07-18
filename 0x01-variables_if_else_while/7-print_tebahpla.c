#include <stdio.h>
/**
 *main - A program that prints the lowercase alphabet in reverse
 *Return: 0 (Success)
 */
int main(void)
{
int i = 'z';

while (i >= 'a')
{
	putchar(i);
	i--;
}
putchar('\n');
return (0);
}
