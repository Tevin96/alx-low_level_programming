#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: number of bits
 * @m: number of bits
 * Return: number of bits you would need to flip
 * to get from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;
	unsigned long int flip_bits_numbers = n ^ m;

	while (flip_bits_numbers)
	{
		bits++;
		flip_bits_numbers &= flip_bits_numbers - 1;
	}
	return (bits);
}
