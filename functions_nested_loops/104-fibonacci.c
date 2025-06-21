#include "main.h"

/**
 * main - Gold numbers last return
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;

	long double x = 0, y = 1, fibo = 0;

	for (; i < 98; i++)
	{
		fibo = x + y;

		printf("%.0Lf", fibo);

		if (i < 97)
			printf(", ");
		else
			printf("\n");

		x = y;
		y = fibo;
	}
	return (0);
}
