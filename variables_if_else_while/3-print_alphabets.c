
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that prints the alphabet in lowercase,
 *        and then in uppercase, followed by a new line.
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
char d = 'A';

for (; c <= 'z'; c++)
{
putchar(c);
}
for (; d <= 'Z'; d++)
{
putchar(d);
}
putchar('\n');

return (0);
}
