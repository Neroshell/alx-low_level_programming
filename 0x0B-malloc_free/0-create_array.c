#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: size of the array
 * @c: character to initialize the array with
 * Return: pointer to the array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);
	if (size == 0 || array == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	array[i] = c;

	return (array);
}
