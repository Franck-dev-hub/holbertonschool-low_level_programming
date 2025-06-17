#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This program will assign a random number
 *        to the variable n each time it is executed.
 *
 * The variable n will store a different value
 *     every time you run this program
 * The output of the program should be:
 *   The string Last digit of, followed by
 *     n, followed by
 *       the string is, followed by
 *         if the last digit of n is greater than 5:
 *             the string and is greater than 5
 *         if the last digit of n is 0: the string and is 0
 *         if the last digit of n is less than 6 and not 0:
 *         the string and is less than 6 and not 0
 *       followed by a new line
 *
 * Return: 0
 */

int main(void)
{
int n;
int b;

srand(time(0));
n = rand() - RAND_MAX / 2;

b = n % 10;

printf("Last digit of %d is ", n);
if (b > 5)
{
printf("%d and is greater than 5\n", b);
}
else if (b == 0)
{
printf("%d and is 0\n", b);
}
else
{
printf("%d and is less than 6 and not 0\n", b);
}

	return (0);
}
