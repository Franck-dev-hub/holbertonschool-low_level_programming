#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - Prints a buffer
 * @b: Pointer
 * @size: Size
 *
 * Thanx gpt to guide me
 * I couldn't do it all by myself
 *
 * Return: 0
 */

void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", (unsigned char)b[i + j]);
			else
				printf("  ");

			if (j % 2)
				printf(" ");
		}

		for (j = 0; j < 10 && (i + j) < size; j++)
		{
			char c = b[i + j];

			if (isprint(c))
				printf("%c", c);
			else
				printf(".");
		}

		printf("\n");
	}
}

