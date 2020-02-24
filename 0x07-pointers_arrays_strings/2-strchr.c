/**
 * _strchr - locates a character in a string
 * @s: char
 * @c: char
 * Return: char
 */
char *_strchr(char *s, char c)
{
int i;
	for (i = 0; s[i] != c; i++)
	{}
	return (&s[i]);
}
