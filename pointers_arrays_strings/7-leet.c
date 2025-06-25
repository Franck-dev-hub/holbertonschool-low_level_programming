#include "main.h"

/**
 * leet - Let it bee
 * @c: Let it beeeeeeeeeee
 *
 * Return: 0
 */

char *leet(char *c)
{
	char key[] = {'a', 'e', 'o', 't', 'l'};
	char value[] = {'4', '3', '0', '7', '1'};
	int i = 0, len = 0;

	while (c[len] != '\0')
	{
		for (i = 0 ; value[i] != '\0' ; i++)
		{
			if (c[len] == key[i] || c[len] == key[i] - 32)
			{
				c[len] = value[i];
			}
		}
		len++;
	}

	return (c);
}
