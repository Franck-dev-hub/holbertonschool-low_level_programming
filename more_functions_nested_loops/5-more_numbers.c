#include "main.h"

/**
 * more_numbers - 0 to 14 !!
 *
 * Return: 0
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 15 ; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');

		}
		_putchar('\n');
	}
}
