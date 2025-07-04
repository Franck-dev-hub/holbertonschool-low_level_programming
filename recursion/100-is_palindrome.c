#include "main.h"

/**
 * _strlen - Find the length of a string
 * @s: string
 *
 * Return: 0
 */

int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}

/**
 * _palindrome_sub_func - Check if a string is a palindrome sub function
 * @s: string
 * @start: starting index
 * @end: ending index
 *
 * Return: 0
 */

int _palindrome_sub_func(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (_palindrome_sub_func(s, start + 1, end - 1));

}

/**
 * is_palindrome - Check if string is a palindrome
 * @s: string
 *
 * Return: 0
 */

int is_palindrome(char *s)
{
	int len;

	if (s == 0)
	{
		return (0);
	}
	else if (*s == '\0')
	{
		return (1);
	}

	len = _strlen(s);

	return (_palindrome_sub_func(s, 0, len - 1));
}
