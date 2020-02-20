#include "holberton.h"
/**
*_strncat - concatenates two strings
*@dest: pointer to char
*@src: pointer to char
*@n: int
*Return: dest
*/
char *_strncat(char *dest, char *src, int n)
char *_strncat(char *dest, char *src, int n)
{
int a;
int b;
a = b = 0;
while (*(dest + a))
a++;
while (a < n && *(src + b))
{
dest[a] = src[b];
a++;
b++;
}
if (b < n)
dest[a] = src[b];
return (dest);
}
