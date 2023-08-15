#include "main.h"

int is_prime(int n, int a);

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * otherwise return 0
 * @n: number
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, n - 1));
}

/**
 * is_prime - calculates if a number is prime
 * @n: number
 * @a: iterator
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime(int n, int a)
{
if (a == 1)
	return (1);

if (n % a == 0 && a > 0)
return (0);
return (is_prime(n, a - 1));
}
