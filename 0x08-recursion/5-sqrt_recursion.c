#include "main.h"

int _sqrt(int n, int a);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)

	return (-1);

	return (_sqrt(n, 0));
}

/**
 * _sqrt - calculates the natural square root
 * @n: number
 * @a: iterator
 * Return: natural square root
 */
int _sqrt(int n, int a)
{
	int sqrt = a * a;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (a);
	return (_sqrt(n, a + 1));
}
