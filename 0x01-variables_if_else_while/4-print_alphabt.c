#include <stdio.h>
/**
*main - A program that prints except q and e
*Return: 0 (Success)
*/
int main(void)
{
int i = 'a';
int j = 'z';

while (i <= j)
{
	if (i == 'e' || i == 'q')
	{
		i++;
		continue;
	}
	putchar(i);
	i++;
}
putchar('\n');
return (0);
}
