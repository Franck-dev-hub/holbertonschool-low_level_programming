#include "main.h"

/**
 * _isalpha - Check if c is alfpha
 * @c: c is an a without a bar
 * Return: 0
 */

int _isalpha(int i)
{
	if ((i >= 65 && i <= 90) || (i >= 97 && i <= 122))
	{
		return (1);
	}

	return (0);
}
