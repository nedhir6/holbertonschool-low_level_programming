#include <stdio.h>
/**
 * main - a program that prints the number of arguments passed into it.
 *@argc: argc
 *@argv: argv
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
	(void)argv;
}
