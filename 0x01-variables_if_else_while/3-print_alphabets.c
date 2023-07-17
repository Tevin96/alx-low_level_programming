#include<stdio.h>
/**
* main - A program that prints the alphabet in lowercase, and then in uppercase
* Return: 0 (Success)
*/
int main(void)
{
	int i;
	int j;

	i = 'a';
	j = 'A';
	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	while (j <= 'Z')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
