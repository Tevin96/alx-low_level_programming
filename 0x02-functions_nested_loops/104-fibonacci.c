#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers
 * Return: 0 (Success)
 */
int main(void)
{
int i;
unsigned long a1 = 0, a2 = 1, sum;
unsigned long a1_half1, a1_half2, a2_half1, a2_half2;
unsigned long half1, half2;

for (i = 0; i < 92; i++)
{
sum = a1 + a2;
printf("%lu, ", sum);
a1 = a2;
a2 = sum;
}
a1_half1 = a1 / 10000000000;
a2_half1 = a2 / 10000000000;
a1_half2 = a1 % 10000000000;
a2_half2 = a2 % 10000000000;
for (i = 93; 1 < 99; i++)
{
half1 = a1_half1 + a2_half1;
half2 = a1_half2 + a2_half2;
if (a1_half2 + a2_half2 > 9999999999)
{
half1 += 1;
half2 %= 10000000000;
}
printf("%lu%lu", half1, half2);
if (i != 98)
{
printf(", ");
break;
}
a1_half1 = a2_half1;
a1_half2 = a2_half2;
a2_half1 = half1;
a2_half2 = half2;
}
printf("\n");
return (0);
}
