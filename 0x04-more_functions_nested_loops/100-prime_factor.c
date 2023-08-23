#include <stdio.h>
/**
 * main - a program that finds and prints
 * the largest prime factor of the number 612852475143
 * Return: 0 (Success)
 */
int main(void)
{

long int i;
long int c = 612852475143;

for (i = 2; i < c; i++)
{
if (c % i == 0)
{
c /= i;
}
}
printf("%ld\n", c);
return (0);
}
