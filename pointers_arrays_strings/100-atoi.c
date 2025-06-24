#include "main.h"

/**
 * _atoi - pas a moi
 * @s: i sink so
 *
 * Return: 0
 */

int _atoi(char *s)
{

	int i = 0, sign = 1, start = 0;
	unsigned int result = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			start = 1;
			result = result * 10 + (s[i] - '0');
		}
		else if (start)
		{
			break;
		}
		i++;
	}
	return (result * sign);
}
