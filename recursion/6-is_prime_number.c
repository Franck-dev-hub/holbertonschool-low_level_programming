#include "main.h"

/**
 * prime_sub_func - sub function to find prime number
 * @n: number
 * @div: divisor
 *
 * Return: 0
 */

int prime_sub_func(int n, int div)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (div * div > n)
	{
		return (1);
	}
	else if (n % div == 0)
	{
		return (0);
	}
	return (prime_sub_func(n, div + 1));
}



/**
 * is_prime_number - check if it's a prime number
 * @n: number
 *
 * Return: 0
 */

int is_prime_number(int n)
{
	return (prime_sub_func(n, 2));
}
