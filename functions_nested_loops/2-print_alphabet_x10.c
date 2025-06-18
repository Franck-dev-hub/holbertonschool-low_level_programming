#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "1-alphabet.c"

/**
 * print_alphabet_x10 - Print alphabet 10 times
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
int i = 0;

for (; i < 10; i++)
{
print_alphabet();
}
}
