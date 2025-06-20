#include "main.h"

/**
 * print_alphabet - Write a function that prints the alphabet, in lowercase,
 *        followed by a new line.
 *
 *   You can only use _putchar twice in your code
 *
 * Return: 0
 */

void print_alphabet(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
