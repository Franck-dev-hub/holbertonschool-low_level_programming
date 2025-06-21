#include "main.h"

/**
 * _abs - to print abs value of an int
 * @i: i i
 * Return: 0
 */

int _abs(int i)
{
	if (i < 0)
	{
		int abs_val;

		abs_val = i * -1;

		return (abs_val);
	}

	return (i);
}
