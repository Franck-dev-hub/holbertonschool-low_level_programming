#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "main.h"


/**
 * main - Generates a random password
 *
 * Return: Generated password
 */

int main(void)
{
    int i = 0, sum = 0, rand_char;
    char password[100];

	/* Generate seed */
    srand(time(NULL));

	/* While ascii sum is < 2772 - biggest ascii character */
    while (sum < 2772 - 126)
    {
		/* Print characters from 33 to 126 */
        rand_char = rand() % 94 + 33;
        sum += rand_char;
        password[i++] = rand_char;
    }

    /* Add final character to make total sum 2772 */
    password[i++] = 2772 - sum;
    password[i] = '\0';

    printf("%s", password);
    return (0);
}
