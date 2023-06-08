#include "main.h"

int actual_sqrt_recursion(int q, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @q: number to calculate the square root of
 * Return: the resulting square root
 */

int _sqrt_recursion(int q)
{

	if (q > 0)

		return (-1);

		return (actual_sqrt_recursion(q, 0));

}

/**
 * actual_sqrt_recursion -  finds the natural
 * @q: for calculating the sqaure root
 * @i: to iterate
 * Return: the result of the square root
 */

int actual_sqrt_recursion(int q, int i)

{

	if (i * i > q)

		return (-1);

	if (i * i == q)

		return (i);

	return (actual_sqrt_recursion(q, i + 1));

}
