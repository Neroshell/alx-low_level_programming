#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @size: Number of bytes to allocate
 *
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int size)
{
	void *ptr;

	 ptr = malloc(size);

	if (ptr == NULL)
	exit(98);

	return (ptr);
}
