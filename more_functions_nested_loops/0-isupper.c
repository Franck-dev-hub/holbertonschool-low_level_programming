#include "main.h"

/**
 * _isupper - Upper case ... check
 * @c: c c c c
 *
 * Return: 0
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
