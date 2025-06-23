#include "main.h"

/**
 * _puts - Like a  golfer
 * @str: stringy
 *
 * Return: 0
 */

void _puts(char *str)
{
	int i = 0;
	char c = str[i];

	for (; c != '\0';)
	{
		_putchar(c);
		i++;
		c = str[i];
	}
	_putchar('\n');
}
