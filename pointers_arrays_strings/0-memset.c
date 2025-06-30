#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: buffer to fill
 * @b: constant byte to fill with
 * @n: number of bytes to fill
 *
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
