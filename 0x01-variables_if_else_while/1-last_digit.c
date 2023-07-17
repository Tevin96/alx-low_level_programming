#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - A program that will assign random number each time it is executed
* Return: 0 (Success)
*/

int main(void)
{
int n;
int x;

srand(time(0));
n = rand() - RAND_MAX / 2;
x = n % 10;
if (x > 5)
printf("last digit of %d is %d and ks greater than 5\n", n, x);
else if (x == 0)
printf("last digit of %d is %d and is 0\n", n, x);
else if (x < 6 && x != 0)
printf("last digit of %d is %d and less than 6 and not 0\n", n, x);
return (0);
}
