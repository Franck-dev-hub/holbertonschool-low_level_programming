#include "main.h"
#include <stdio.h>
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
	int i;
	unsigned long int mul = 0, num1 = 0, num2 = 0;

	if (argc != 3 || !*argv[1] || !*argv[2])
		return (printf("Error\n"), exit(98), 98);

	for (i = 0; argv[1][i]; i++)
		if (!isdigit(argv[1][i]))
			return (printf("Error\n"), exit(98), 98);

	for (i = 0; argv[2][i]; i++)
		if (!isdigit(argv[2][i]))
			return (printf("Error\n"), exit(98), 98);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	mul = num1 * num2;
	printf("%li\n", mul);
	return (0);
}
