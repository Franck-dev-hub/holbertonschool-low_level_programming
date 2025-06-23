#include "main.h"

/**
 * main - Biggest of all
 *
 * Return: 0
 */

int main(void)
{
	long int factor = 2, n = 612852475143;

	while (factor * factor <= n)
	{
		if (n % factor == 0)
		{
			n /= factor;
		}
		else
	{
			factor++;
		}
	}
	printf("%li\n", n);
	return (0);
}
