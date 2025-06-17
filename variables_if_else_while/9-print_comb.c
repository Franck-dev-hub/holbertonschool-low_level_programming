#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that prints all possible combinations
 *        of single-digit numbers.
 *
 *   Numbers must be separated by ,, followed by a space
 *   Numbers should be printed in ascending order
 *   You can only use the putchar function (every other function
 *   (printf, puts, etc…) is forbidden)
 *   All your code should be in the main function
 *   You can only use putchar four times maximum in your code
 *   You are not allowed to use any variable of type char
 *
 * Return: 0
 */

int main(void)
{
int num = 48;

for (; num <= 57; num++)
{
putchar(num);
if (num != 57)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
