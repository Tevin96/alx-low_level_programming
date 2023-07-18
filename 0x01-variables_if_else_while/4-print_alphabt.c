#include <stdio.h>
/**
*main - A program that prints except q and e
*Return: 0 (Success)
*/
int main(void)
{
int i = 'a';
	
while (i <= 'z')
{
if (i == 'e' || i == 'q')
putchar(i);
i++;
}
putchar('\n');
return (0);
}	 
