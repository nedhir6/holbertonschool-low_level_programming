#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the minimum number of coins.
 *@argc: argc
 *@argv: argv
 * Return: 1 or 0.
 */
int main(int argc, char *argv[])
{
	int am, i = 0, nbr, a = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	am = atoi(argv[1]);
	if (am <= 0)
	{
		printf("0");
		return (1);
	}
	while (am != 0 && a < 5)
	{
		nbr = am / coins[a];
		am = am % coins[a];
		i += nbr;
		a++;
	}
	printf("%d\n", i);
	return (0);
}
