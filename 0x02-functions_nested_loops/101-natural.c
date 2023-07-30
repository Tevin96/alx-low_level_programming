#include <stdio.h>
/**
 * main - sum of all multipes of 3 or 5 below 1024
 * Return: 0 (Success)
 */
int main(void)
{
	int a, b = 0;

	while (a < 1024)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			b += a;
		}
		a++;
	}
	printf("%d\n", b);
	return (0);
}
