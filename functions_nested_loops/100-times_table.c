#include "main.h"

/**
* print_times_table - To help children with their homework
* @n: n table product
*
* Return: 0
*/

int print_times_table(int n)
{
	int i, j;

	if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
	}
	if ((n < 15) && (n > 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == 0)
				{
					_putchar('0');
					_putchar(',');
				}
				if ((j != n) && (j != 0))
				{
					print_product(i * j);
					_putchar(',');
				}
				else if (j == n)
				{
					print_product(i * j);
				}
			}
			_putchar('\n');
		}
	}
}

/**
 * print_product - To print the product
 * @p: pp
 *
 * Return: 0
 */

int print_product(int p)
{
	if (p < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(p + '0');
	}
	else if (p < 100)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar((p / 10) %  10 + '0');
		_putchar((p % 10) + '0');
	}
	else
	{
		_putchar(' ');
		_putchar(((p / 100) % 10) + '0');
		_putchar((p / 10) %  10 + '0');
		_putchar((p % 10) + '0');
	}
}
