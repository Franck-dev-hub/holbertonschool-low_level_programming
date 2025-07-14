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
		if (format[i] == 'c')
		{
			printf("%s%c", sep, va_arg(args, int));
			sep = ", ";
		}
		else if (format[i] == 'i')
		{
			printf("%s%d", sep, va_arg(args, int));
			sep = ", ";
		}
		else if (format[i] == 'f')
		{
			printf("%s%f", sep, va_arg(args, double));
			sep = ", ";
		}
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			if (!str)
				str = "(nil)";
			printf("%s%s", sep, str);
			sep = ", ";
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
