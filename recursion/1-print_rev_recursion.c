#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse
 * @s: string to be printed
 *
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_print_rev_recursion(&s[i + 1]);
		_putchar(s[i]);
	}
}

