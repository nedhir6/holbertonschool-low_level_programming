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
i++;
return  (i);
}


#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: pointer to the new string.
*/
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i = 0;
	int len1 = 0;
	int len2 = 0;
	int j = 0;
	int len3 = 0;

	if ((s1 == NULL) && (s2 == NULL))
	{
		p = NULL;
		return (p);
	}
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len3 = len1 + len2 + 1;
	p = malloc(sizeof(char) * ((len1 - 1) + (len2 - 1)));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (len1 - 1); i++)
		p[i] = s1[i];
	for (i = (len1 - 1); i <= len3; i++)
	{
		p[i] = s2[j];
		j++;
	}
	return (p);
}
