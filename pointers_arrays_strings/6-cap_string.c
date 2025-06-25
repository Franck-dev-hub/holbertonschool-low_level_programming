#include "main.h"

/**
 * cap_string - Captain string you are not
 * @str: From this galaxy
 *
 * Return: 0
 */

char *cap_string(char *str);
{
	int i = 0, temp;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && temp == ' ')
		{
			temp = i;
			str[i] = str[i] - 32;
		}
		i++;
	}

	return (str);
}
