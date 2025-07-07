#include "main.h"

/**
 * str_concat - concatenate strings
 * @s1: first string
 * @s2: second one
 *
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned long int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	concat = malloc(i + j + 1);

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		concat[i + j] = s2[j];
	concat[i + j] = '\0';

	return (concat);
}
