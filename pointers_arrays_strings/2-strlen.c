#include "main.h"

/**
 * _strlen - Length of my string è_é
 * @s: sssssssstring !
 *
 * Return: 0
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
