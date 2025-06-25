#include "main.h"

/**
 * reverse_array - Return to Murray
 * @a: Abra ca da bra
 * @n: ou nah nah
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, temp = 0;

	for (i = n - 1 ; i >= n / 2 ; i--)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}
