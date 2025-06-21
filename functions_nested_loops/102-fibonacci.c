#include "main.h"

/**
 * main - Gold numbers
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long x = 0, y = 1, fibo;

	for (; i < 50; i++)
	{
		fibo = x + y;

		printf("%li", fibo);

		if (i < 49)
			printf(", ");
		else
			printf("\n");

		x = y;
		y = fibo;
	}
	return (0);
}
