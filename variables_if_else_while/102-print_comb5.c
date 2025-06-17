#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that prints all possible combinations
 * of two two-digit numbers.
 *
 *   The numbers should range from 0 to 99
 *   The two numbers should be separated by a space
 *   All numbers should be printed with two digits
 *   1 should be printed as 01
 *   The combination of numbers must be separated by comma, followed by a space
 *   The combinations of numbers should be printed in ascending order
 *   00 01 and 01 00 are considered as the same combination
 *       of the numbers 0 and 1
 *   You can only use the putchar function
 *   (every other function (printf, puts, etc…) is forbidden)
 *   You can only use putchar eight times maximum in your code
 *   You are not allowed to use any variable of type char
 *   All your code should be in the main function
 *
 * Return: 0
 */

int main(void)
{
int a, b;

for (a = 0; a <= 98; a++)
{
for (b = a + 1; b <= 99; b++)
{
putchar(a / 10 + '0');
putchar(a % 10 + '0');
putchar(' ');
putchar(b / 10 + '0');
putchar(b % 10 + '0');

if (!(a == 98 && b == 99))
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');
return (0);
}
