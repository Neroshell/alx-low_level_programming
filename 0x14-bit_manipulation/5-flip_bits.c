#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, times = 0;
	unsigned long int new;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		new = exclusive >> i;
		if (new & 1)
			times++;
	}

	return (times);
}
