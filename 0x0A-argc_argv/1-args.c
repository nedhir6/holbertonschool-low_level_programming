#include <stdio.h>
/**
 * main - a program that prints the number of arguments passed into it.
 *@argc: argc
 *@argv: argv
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
