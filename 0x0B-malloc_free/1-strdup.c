#include "holberton.h"
#include <stdio.h>
/**
 * _strlen - lenght of a string.
 * @s: pointer
 * Return: i .
 */
int _strlen(char *s)
{
int i = 0;
for (i = 0; s[i] != '\0'; i++)
{}
return  (i);
}


#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string.
 * @str: string to be duplicated.
 * Return: pointer to the new string.
*/
char *_strdup(char *str)
{
	char *p;
	int i = 0;
	int len = 0;

	len = _strlen(str);
	if (str == 0)
		return (NULL);
	p = malloc(sizeof(char) * (len - 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		p[i] = str[i];
	return (p);
}
