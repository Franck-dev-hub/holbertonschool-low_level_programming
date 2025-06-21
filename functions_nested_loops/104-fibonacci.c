#include "main.h"

/**
 * main - Gold numbers last return
 *
 * Return: 0
 */

int main(void)
{
	unsigned long i;
	unsigned long high_1 = 0, low_1 = 1;
	unsigned long high_2 = 0, low_2 = 2;
	unsigned long high = 0, low = 0;
	unsigned long const BASE = 1000000000;

	printf("1, 2");

	for (i = 2; i < 98; i++)
	{
		low = low_1 + low_2;
		high = high_1 + high_2;
		if (low >= BASE)
		{
			low -= BASE;
			high += 1;
		}

		if (high > 0)
			printf(", %lu%09lu", high, low);
		else
			printf(", %lu", low);

		high_1 = high_2;
		low_1 = low_2;
		high_2 = high;
		low_2 = low;
	}
	printf("\n");
	return (0);
}
