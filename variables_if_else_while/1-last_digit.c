#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Infos here
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
