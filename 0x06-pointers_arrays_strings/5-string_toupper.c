#include "holberton.h"
/**
*string_toupper - lowercase to upper
*@s :string
*Return: s
*/
char *string_toupper(char *s)
{
int i = 0;

while (*(s + i))
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] -= 'a' - 'A';
i++;
}
return (s);
}
