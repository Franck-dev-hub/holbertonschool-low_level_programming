#include "main.h"

/**
 * print_number - The basic of all integers
 * @n: integer to integrate
 * Return: 0
 */

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
	num = n;

	if (num / 10)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}
