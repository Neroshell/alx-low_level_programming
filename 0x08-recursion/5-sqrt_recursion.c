#include "main.h"

int calculate_sqrt(int num, int iterator);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Number to calculate the square root of
 *
 * Return: The resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (calculate_sqrt(n, 0));
}

/**
 * calculate_sqrt - Recursively finds the natural square root of a number
 * @num: Number to calculate the square root of
 * @iterator: Iterator for checking square roots
 *
 * Return: The resulting square root
 */
int calculate_sqrt(int num, int iterator)
{
	if (iterator * iterator > num)
		return (-1);
	if (iterator * iterator == num)
		return (iterator);
	return (calculate_sqrt(num, iterator + 1));
}
