#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_strings - print strings
 * @separator: string to be printed between
 * @n: strings
 *
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str != NULL)
			printf("%s", str);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
