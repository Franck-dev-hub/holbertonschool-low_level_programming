#include <stdio.h>

/**
  * is_num_palindrome - Check if num is a palinrome
  * @n: Input number.
  *
  * Return: 1 if it's a palindrome, else 0.
  */

int is_num_palindrome(unsigned long int n)
{
	unsigned long int original = n, reversed = 0;

	while (n > 0)
	{
		reversed = reversed * 10 + n % 10;
		n /= 10;
	}
	return (original == reversed);
}

/**
  * main - Print biggest palindrome.
  *
  * Return: 0
  */

int main(void)
{
	unsigned long int i, j, mul, pal = 0;

	for (i = 100; i < 1000; i++)
	{
		for (j = 100; j < 1000; j++)
		{
			mul = i * j;
			if (is_num_palindrome(mul) && (mul) > pal)
				pal = mul;
		}
	}
	printf("%lu\n", pal);
	return (0);
}
