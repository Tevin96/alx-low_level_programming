#include <stdio.h>
/**
 * main _ prints the first 50 Fibonacci numbers
 * Return: 0 (Success)
 */
int main(void)
{
int a = 0;
long i = 1, j = 2;

while (a < 50)
{
if (a == 0)
printf("%ld", i);
else if (a == 1)
printf(", %ld", j);
else
{
j += i;
i = j - i;
printf(", %ld", j);
}
++a;
}
printf("\n");
return (0);
}
