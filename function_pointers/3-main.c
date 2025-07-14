#include "3-calc.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;
	int (*operation)(int, int);

	if (argc != 4)
		return (printf("Error\n"), 98);

	operation = get_op_func(argv[2]);

	if (operation == NULL)
		return (printf("Error\n"), 99);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (num2 == 0 && (strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0))
		return (printf("Error\n"), 100);

	result = operation(num1, num2);

	printf("%i\n", result);

	return (0);
}
