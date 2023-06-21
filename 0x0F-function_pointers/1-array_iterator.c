#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a given action on each element of an array
 * @array: The array to iterate through
 * @size: The size of the array
 * @action: A function pointer to the action to be performed
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
