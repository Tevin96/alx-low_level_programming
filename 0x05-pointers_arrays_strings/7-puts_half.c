#include "main.h"
/**
 *  puts_half - a function that prints half of a string
 *  @str: input
 *  Return: length
 */
void puts_half(char *str)
{
int len = 0;

while (*str != '\0')
{
len++;
str++;
}
return (len);
}
