#include "main.h"

/**
* print_last_digit - function to print last digit
*
* @i: assumed parameters
*
* Return: q
*/

int print_last_digit(int i)
{
	int q;

	q = i % 10;
	if (i < 0)
		q = -q;
	_putchar(q + '0');
	return (q);
}
