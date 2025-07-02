#include <stdio.h>

/**
 * main - print the number of argument passed to the program
 * @argc: count
 * @argv: vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%i\n", argc - 1);

	return (0);
}
