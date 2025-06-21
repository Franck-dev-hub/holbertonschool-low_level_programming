#include "main.h"

/**
* print_times_table - To help children with their homework
* @i: i table product
*
* Return: 0
*/

int print_times_table(int i)
{
	int row, col, product;

	if (i < 0 || i > 15)
		return (0);

	for (row = 0; row <= i; row++)
	{
		for (col = 0; col <= i; col++)
		{
			product = row * col;

			if (col == 0)
			{
				_putchar(product + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (product < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (product < 100)
				{
					_putchar(' ');
				}

				if (product >= 100)
					_putchar((product / 100) + '0');
				if (product >= 10)
					_putchar(((product / 10) % 10) + '0');
				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}
	return (0);
}
