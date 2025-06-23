#include "main.h"

/**
 * swap_int - Morph style
 * @a: AH !
 * @b: Beh ...
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;

	*a = *b;
	*b = swap;
}
