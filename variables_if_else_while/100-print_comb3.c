#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that prints all possible different combinations
 *        of two digits.
 *
 *   Numbers must be separated by ,, followed by a space
 *   The two digits must be different
 *   01 and 10 are considered the same combination of the two digits 0 and 1
 *   Print only the smallest combination of two digits
 *   Numbers should be printed in ascending order, with two digits
 *   You can only use the putchar function
 *   (every other function (printf, puts, etc…) is forbidden)
 *   You can only use putchar five times maximum in your code
 *   You are not allowed to use any variable of type char
 *   All your code should be in the main function
 *
 * Return: 0
 */

int main(void)
{
int i, j;

for (i = 48; i <= 56; i++)
{
for (j = i + 1; j <= 57; j++)
{
putchar(i);
putchar(j);
if (i != 56 || j != 57)
{
putchar(44);
putchar(32);
}
}
}

putchar('\n');
return (0);
}


