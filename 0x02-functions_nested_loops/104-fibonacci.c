#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers
 * Return: 0 (Success)
 */
int main(void)
{
int i;
unsigned long int a1 = 0, b1 = 1, a2 = 0, b2 = 2;
unsigned long c1, c2, c3;

printf("%lu, %lu, ", b1, b2);
	for (i = 2; i < 98; i++)
	{
		if (b1 + b2 > 10000000000 || a2 > 0 || a1 > 0)
		{
			c1 = (b1 + b2) / 10000000000;
			c2 = (b1 + b2) % 10000000000;
			c3 = a1 + a2 + c1;
			a1 = a2, a2 = c3;
			b1 = b2, b2 = c2;
			printf("%lu%010lu", a2, b2);
		}
		else
		{
			c2 = b1 + b2;
			b1 = b2, b2 = c2;
			printf("%lu", b2);
		}
		if (i != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
