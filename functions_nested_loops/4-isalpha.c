#include "main.h"

/**
 * _isalpha - Check if i is alpha
 * @i: i is an a without a belly
 * 
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
