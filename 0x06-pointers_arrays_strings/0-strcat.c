#include "holberton.h"
/**
*_strcat - concatenates two strings
*@dest: pointer to char
*@src: pointer to char
*Return: dest
*/
char *_strcat(char *dest, char *src)
{
while (*dest != '\0')
dest++;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
return (dest);
}
