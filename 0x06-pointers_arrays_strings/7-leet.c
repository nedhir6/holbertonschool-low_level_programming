#include "holberton.h"
/**
*leet - 1337
*@s: pointer
*Return: s
*/
char *leet(char *s)
{
int i = 0, j;
char d[] = {'A', 'E', 'O', 'T', 'L'};
char c[] = {'4', '3', '0', '7', '1'};
while (s[i] != '\0')
{
for (j = 0; d[j] != '\0'; j++)
{
if (s[i] == d[j] || s[i] == d[j] + 32)
{
s[i] = c[j];
}
}
i++;
}
return (s);
}
