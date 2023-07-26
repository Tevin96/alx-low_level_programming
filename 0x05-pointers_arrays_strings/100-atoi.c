#include "main.h"
/**
* _atoi - a function that convert a string to an integer
*@s: the pointer to convert
*Return: integer
*/
int _atoi(char *s)
{
int i = 0;
int j = 0;
int m = 1;
int n = 0;

while (s[i])
{
if (s[i] == '-')
{
m *= -1;
}
while (s[i] >= '0' && s[i] <= '9')
{
n = 1;
j = (j * 10) + (s[i] - '0');
i++;
}
if (n == 1)
{
break;
}
i++;
}
j *= m;
return (j);
}
