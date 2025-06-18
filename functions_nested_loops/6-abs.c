#include "main.h"

/**
 * _abs - to print abs value of an int
 * @c: c is a d whitout a bar
 * Return: 0
 */

int _abs(int c)
{
if (c < 0)
{
int abs_val;

abs_val = c * -1;

return (abs_val);
}

return (c);
}
