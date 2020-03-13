#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - prints all args.
 * @separator: string to be printed between numbers
 * @n: number of ints.
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *c;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(ap, char*);
		if (c == NULL)
			printf("(nil)");
		printf("%s", c);
		if ((i < (n - 1)) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
		printf("\n");
	va_end(ap);
}
