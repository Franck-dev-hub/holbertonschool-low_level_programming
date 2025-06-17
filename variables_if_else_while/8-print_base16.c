#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that prints all the numbers of base 16 in lowercase,
 *        followed by a new line.
*
*  You can only use the putchar function
*  (every other function (printf, puts, etc…) is forbidden)
*  All your code should be in the main function
*  You can only use putchar three times in your code
*
 * Return: 0
 */

int main(void)
{

char c = 'a';
int i = 48;

for (; i <= 57; i++)
putchar(i);

for (; c <= 'f'; c++)
putchar(c);

putchar('\n');
return (0);
}
