#include "main.h"

/**
 * _isalpha - Check if c is alfpha
 * @c: c is an a without a bar
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
