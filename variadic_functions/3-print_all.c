#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_all - print everything
 * @format: thing to be printed
 *
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list args;
	char *str, *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')
		{
			printf("%s", sep);
			if (format[i] == 'c')
				printf("%c", va_arg(args, int));
			else if (format[i] == 'i')
				printf("%i", va_arg(args, int));
			else if (format[i] == 'f')
				printf("%f", va_arg(args, double));
			else if (format[i] == 's')
			{
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
			}
			sep = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
