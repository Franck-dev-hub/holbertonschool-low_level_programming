#include "main.h"

/**
 * _islower - Check if c is in lowercase
 * @c: c is a c without an a
 *
 * Return: 0
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
