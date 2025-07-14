#include "main.h"

/**
 * strtow - split strings into words
 * @str: input string
 *
 * Return: 0
 */

char **strtow(char *str)
{
	int i = 0, j, k = 0, start, end, word_count = 0;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	while (str[i])
	{
		while (str[i] == ' ')
			i++;
		if (str[i])
		{
			word_count++;
			while (str[i] && str[i] != ' ')
				i++;
		}
	}

	if (word_count == 0)
		return (NULL);

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	i = 0;

	while (str[i] == ' ')
	{
		while (str[i] == ' ')
			i++;
		start = i;

		while (str[i] && str[i] != ' ')
			i++;
		end = i;
		words[k] = malloc((end - start + 1) * sizeof(char));

		if (words[k] == NULL)
		{
			while (k > 0)
				free(words[--k]);
			free(words);
			return (NULL);
		}

		for (j = 0; start < end; j++, start++)
			words[k][j] = str[start];
		words[k][j] = '\0';
		k++;
	}

	words[k] = NULL;
	return (words);
}
