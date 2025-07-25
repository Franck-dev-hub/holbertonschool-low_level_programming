#include "main.h"

/**
 * string_nconcat - concat two strings up to n bytes
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes
 *
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned long int i, j, len1 = 0, len2 = 0;


	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n > len2)
		n = len2;
	concat = malloc(len1 + n + 1);

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];
	for (j = 0; j < n; j++)
		concat[i + j] = s2[j];
	concat[i + j] = '\0';
	return (concat);
}
