#include "main.h"

/**
 * _strncpy - Copycat
 * @dest: My maners
 * @src: For what's mine
 * @n: A lot
 *
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i++] = '\0';
	}

	return (dest);
}
