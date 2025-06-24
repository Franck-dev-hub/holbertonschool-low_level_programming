#include "main.h"

/**
 * puts_half - Back to 90's
 * @str: strength
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int i, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (len % 2 == 0)
		{
			if (i >= (len / 2))
			{
				_putchar(str[i]);
			}
		}
		else
		{
			if (i > (len / 2))
			{
				_putchar(str[i]);
			}
		}
	}
	_putchar('\n');
}
