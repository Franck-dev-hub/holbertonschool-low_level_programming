#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of parameters
 * @n: number of parameters
 *
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	/* Variable declaration for argument access */
	va_list args;

	/* Initialise reading after n */
	va_start(args, n);

	for (i = 0; i < n; i++)
		/* Read int arguments */
		sum += va_arg(args, int);

	/* Read's end */
	va_end(args);

	return (sum);
}
