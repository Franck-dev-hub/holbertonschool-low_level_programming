#include "main.h"

/**
 * print_last_digit - To print the last digit of a number
 * @i: i and i again
 *
 * Return: 0
 */

int print_last_digit(int i)
{
	int last = (i % 10);

	if (last < 0)
		last = last * -1;

	_putchar(last + '0');

	return (last);
}
