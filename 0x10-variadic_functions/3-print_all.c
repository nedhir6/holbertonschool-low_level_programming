#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints all args
 *@format: format of args
 *Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, check;
	char *p;

	va_start(ap, format);
	while (format && format[i])
	{
		check = 1;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%i", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				p = va_arg(ap, char *);
				if (p == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", p);
				break;
			default:
			check = 0;
		}
		if ((check == 1) && format[i + 1] != '\0')
			printf(", ");
		i++;
		va_end(ap);
	}
	printf("\n");
}
