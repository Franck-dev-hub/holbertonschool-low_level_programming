#include "main.h"
#include <stdio.h>

/**
 * print_array - Murray
 * @a: Ah !
 * @n: numb bieber
 *
 * Return: 0
 */

void print_array(int *a, int n)
{
	int len;

	for (len = 0; len < n; len++)
	{
		printf("%i", a[len]);
		if (len != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
