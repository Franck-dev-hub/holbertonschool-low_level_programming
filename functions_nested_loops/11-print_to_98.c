#include "main.h"

/**
 * print_to_98 - world cup I guess
 * @i: it's a number duh
 *
 * Return: 0
 */

void print_to_98(int i)
{
	if (i <= 98)
	{
		for (; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	else
	{
		for (; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	printf("\n");
}
