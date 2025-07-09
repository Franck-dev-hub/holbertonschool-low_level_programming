#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * main - multiplies two positive numbers
 * @argc: count
 * @argv: vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, len1, len2, mul = 0, sum = 0, *res;

	if (argc != 3 || !*argv[1] || !*argv[2])
		return (printf("Error\n"), exit(98), 98);

	for (i = 0; argv[1][i]; i++)
		if (!isdigit(argv[1][i]))
			return (printf("Error\n"), exit(98), 98);

	for (i = 0; argv[2][i]; i++)
		if (!isdigit(argv[2][i]))
			return (printf("Error\n"), exit(98), 98);

	len1 = strlen(argv[1]), len2 = strlen(argv[2]);
	res = calloc(len1 + len2, sizeof(int));
	if (!res)
		return (printf("Error\n"), exit(98), 98);

	for (i = len1 - 1; i >= 0; i--)
		for (j = len2 - 1; j >= 0; j--)
		{
			mul = (argv[1][i] - '0') * (argv[2][j] - '0');
			sum = mul + res[i + j + 1];
			res[i + j + 1] = sum % 10;
			res[i + j] += sum / 10;
		}

	for (i = 0; i < len1 + len2 && res[i] == 0; i++)
		;

	if (i == len1 + len2)
		putchar('0');

	for (; i < len1 + len2; i++)
		putchar(res[i] + '0');
	putchar('\n');
	free(res);
	return (0);
}
