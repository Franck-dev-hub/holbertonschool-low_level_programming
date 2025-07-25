#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: pointer to the string to be searched
 * @c: character to be located
 *
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (c == '\0')
	{
		return (s);
	}

	return (0);
}
