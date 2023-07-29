#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 * @str: string
 * Return: str
 */
char *leet(char *str)
{
int a, b;

char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";

for (a = 0; str[a] != '\0'; a++)
{
for (b = 0; b < 10; b++)
{
if (str[a] == s1[b])
{
str[a] = s2[b];
}
}
}
return (str);
}
