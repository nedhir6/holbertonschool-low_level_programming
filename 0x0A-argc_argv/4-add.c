#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that adds positive numbers.
 *@argc: argc
 *@argv: argv
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int add = 0;
	int i = 0, j = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	add += atoi(argv[i]);
	printf("%d\n", add);
	return (0);
}
