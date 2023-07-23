#include "main.h"
#include <stdio.h>
/**
 *main - a program that prints 1 to 100, for multiples of three
 *print Fizz instead of the number and  multiples of five print Buzz
 *FizzBuzz for numbers which are multiples of both three and five
 *Return: 0 (Success)
 */
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if ((i % 3 == 0 && (i % 5) == 0))
printf("FizzBuzz");

else if ((i % 3) == 0)
	printf("Fizz");

else if ((i % 5) == 0)
	printf("Buzz");

else
	printf("%d", i);

if (i == 100)
printf(" ");
}
printf("\n");
return (0);
}
