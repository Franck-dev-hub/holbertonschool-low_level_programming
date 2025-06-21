#include "main.h"

/**
 * main - Gold numbers return
 *
 * Return: 0
 */
int main(void)
{
	long x = 0, y = 1, fibo = 0, result = 0;

	while (result < 4000000)
	{
		fibo = x + y;

		if (fibo % 2 == 0)
			result += fibo;

		x = y;
		y = fibo;
	}
	printf("%li\n", result);
	return (0);
}
