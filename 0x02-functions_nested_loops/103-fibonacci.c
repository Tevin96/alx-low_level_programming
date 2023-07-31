#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 * whose values do not exceed 4,000,000
 * Return: 0 (Success)
 */
int main(void)
{
	int a = 0;
	long i = 1, j = 2, sum = j;

	while (j + i < 4000000)
	{
		j += i;
		if (j % 2 == 0)
			sum += j;
		i = j - i;
		++a;
	}
	printf("%ld\n", sum);
	return (0);
}
