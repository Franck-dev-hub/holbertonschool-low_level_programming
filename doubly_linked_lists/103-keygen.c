#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const char charset[] = "8wDRHC-AB9E0SNl7MnpgbiT2tvzX5syV+ULYcJGOqxf6Wjm4r1aQ3FeZkuoIKdhP";

/**
 * f1 - Compute index based on the length of the input string.
 * @len: Length of the input string.
 *
 * Return: The computed index masked to 6 bits.
 */

unsigned int f1(unsigned int len)
{
	return ((len ^ 0x3b) & 0x3f);
}

/**
 * f2 - Compute index based on sum of characters in the string.
 * @str: Input string.
 * @len: Length of the input string.
 *
 * Return: The computed index masked to 6 bits.
 */

unsigned int f2(const char *str, int len)
{
	unsigned int sum = 0;
	int i;

	for (i = 0; i < len; i++)
	{
		sum += str[i];
	}

	return ((sum ^ 0x4f) & 0x3f);
}

/**
 * f3 - Compute index based on product of characters in the string.
 * @str: Input string.
 * @len: Length of the input string.
 *
 * Return: The computed index masked to 6 bits.
 */

unsigned int f3(const char *str, int len)
{
	unsigned int prod = 1;
	int i;

	for (i = 0; i < len; i++)
	{
		prod *= str[i];
	}

	return ((prod ^ 0x55) & 0x3f);
}

/**
 * f4 - Compute index based on the max char in the string and pseudo-random number.
 * @str: Input string.
 * @len: Length of the input string.
 *
 * Return: The computed index masked to 6 bits.
 */

unsigned int f4(const char *str, int len)
{
	unsigned int max = (unsigned char)str[0];
	int i;

	for (i = 1; i < len; i++)
	{
		if ((unsigned char)str[i] > max)
			max = (unsigned char)str[i];
	}

	srand(max ^ 0xe);

	return ((rand() & 0x3f));
}

/**
 * f5 - Compute index based on sum of squares of characters in the string.
 * @str: Input string.
 * @len: Length of the input string.
 *
 * Return: The computed index masked to 6 bits.
 */

unsigned int f5(const char *str, int len)
{
	unsigned int sum = 0;
	int i;

	for (i = 0; i < len; i++)
	{
		sum += str[i] * str[i];
	}

	return ((sum ^ 0xef) & 0x3f);
}

/**
 * f6 - Compute index based on pseudo-random number seeded with first char.
 * @first_char: First character of the input string.
 *
 * Return: The computed index masked to 6 bits.
 */

unsigned int f6(char first_char)
{
	int i, r = 0;

	srand(first_char);

	for (i = 0; i < first_char; i++)
	{
		r = rand();
	}

	return ((r ^ 0xe5) & 0x3f);
}

/**
 * main - Entry point. Generates a key based on username.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 on success, 1 on error.
 */

int main(int argc, char *argv[])
{
	unsigned int i1, i2, i3, i4, i5, i6, len;
	char *username, key[8];

	if (argc != 2)
	{
		printf("Usage: %s username\n", argv[0]);
		return (1);
	}

	username = argv[1];
	len = strlen(username);

	i1 = f1(len);
	i2 = f2(username, len);
	i3 = f3(username, len);
	i4 = f4(username, len);
	i5 = f5(username, len);
	i6 = f6(username[0]);

	key[0] = charset[i1];
	key[1] = charset[i2];
	key[2] = charset[i3];
	key[3] = charset[i4];
	key[4] = charset[i5];
	key[5] = charset[i6];
	key[6] = '\0';

	printf("%s\n", key);

	return (0);
}
