#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: array
 * @size: size
 * @action: action
 *
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
