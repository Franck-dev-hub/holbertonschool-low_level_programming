#include "main.h"

/**
 * infinite_add - To beyond and the infinite
 * @n1: Im the number one
 * @n2: two twwwwwwwo
 * @r: Ree sult
 * @size_r: Size roar
 * Return: 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k, l, sum = 0, carry = 0;
	int n1_len = 0, n2_len = 0;

	while (n1[n1_len] != '\0')
		n1_len++;
	while (n2[n2_len] != '\0')
		n2_len++;

	i = n1_len - 1;
	j = n2_len - 1;
	k = size_r - 1;
	r[k] = '\0';
	k--;

	while (i >= 0 || j >= 0 || carry)
	{
		if (k < 0)
			return (0);

		sum = carry;
		if (i >= 0)
			sum += n1[i--] - '0';
		if (j >= 0)
			sum += n2[j--] - '0';

		r[k--] = (sum % 10) + '0';
		carry = sum / 10;
	}

	k++;
	for (l = 0; r[k] != '\0'; k++, l++)
		r[l] = r[k];
	r[l] = '\0';

	return (r);
}
