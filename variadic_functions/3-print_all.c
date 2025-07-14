#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>

/**
* print_char - print a char
* @args: argument
*
* Return: 0
*/
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}


/**
* print_int - print an int
* @args: argument
*
* Return: 0
*/
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}


/**
* print_float - print a float
* @args: argument
*
* Return: 0
*/
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}


/**
* print_string - print a string
* @args: argument
*
* Return: 0
*/
void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (!str)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}


/**
 * print_all - print everything
 * @format: thing to be printed
 *
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j;
	va_list args;
	char *sep = "";
	char symbols[] = {'c', 'i', 'f', 's', '\0'};

	void (*sub_fun[])(va_list) = {print_char, print_int, print_float, print_string};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (symbols[j])
		{
			if (symbols[j] == format[i])
			{
				printf("%s", sep);
				sub_fun[j](args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
