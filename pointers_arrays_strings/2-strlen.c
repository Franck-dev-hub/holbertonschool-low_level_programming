#include "main.h"

/**
 * _strlen - Computes the length of a string.
 * @s: Pointer to the null-terminated string to measure.
 *
 * Return: The number of characters in the string.
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
