#include "main.h"
/**
 * rot13 - a function that encodes a string using rot13
 * @str: string
 * Return: str
 */
char *rot13(char *str)
{
	int a, b;

	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (str[a] == s1[b])
			{
				str[a] = rot[b];
				break;
			}
		}
	}
	return (str);
}
