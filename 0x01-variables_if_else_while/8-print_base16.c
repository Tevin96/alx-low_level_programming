#include<stdio.h>
/**
*main - A program that prints all the numbers of base sixteen in lowercase
*Return: 0 (Success)
*/
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
