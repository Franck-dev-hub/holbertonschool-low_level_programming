#include "main.h"

/**
 * *_strspn - get length of a prefix substring
 * @s: pointer to the string to be searched
 * @accept: accepted character
 *
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
			return (count);
	}
	return (count);
}
