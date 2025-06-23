#include "main.h"

/**
 * print_rev - Like Stranger Things
 * @s: sub till
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (len = len - 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}

	_putchar('\n');
}
