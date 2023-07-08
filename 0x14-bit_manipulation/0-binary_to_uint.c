#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: strings that contains the binary number
 *
 * Return: the converted num
 */
unsigned int binary_to_uint(const char *b)
{
	int hi;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (hi = 0; b[hi]; hi++)
	{
		if (b[hi] < '0' || b[hi] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[hi] - '0');
	}

	return (dec_val);
}
