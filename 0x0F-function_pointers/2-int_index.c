#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array and returns its index
 * @array: The array to search in
 * @size: The size of the array
 * @cmp: A pointer to the comparison function
 *
 * Return: The index of the first element for which the comparison function
 *         returns non-zero, -1 if no element matches or on error
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
