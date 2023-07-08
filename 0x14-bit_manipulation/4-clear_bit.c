#include "main.h"

/**
 * clear_bit - set the value of a bit to 0
 * @n: pointer to the number that should change
 * @index: index of the bit to clear
 *
 * Return: 1 is success, -1 is failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
