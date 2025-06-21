#include "main.h"

/**
 * main - 2024 game
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int sum = 0;

	for (; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}
	printf("%i\n", sum);
	return (0);
}
