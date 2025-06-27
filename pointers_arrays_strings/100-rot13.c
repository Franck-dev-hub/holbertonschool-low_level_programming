#include "main.h"

/**
 * rot13 - Rot to the core
 * @str: String
 *
 * Return: updated string
 */

char *rot13(char *str)
{
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; in[j] != '\0'; j++)
		{
			if (str[i] == in[j])
			{
				str[i] = out[j];
				break;
			}
		}
	}

	return (str);
}
