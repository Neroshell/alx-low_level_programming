#include <stdio.h>
#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @str: The string to be converted
 *
 * Return: The integer converted from the string
 */
int _atoi(char *str)
{
	int index, sign, result, length, foundNumber, digit;

	index = 0;
	sign = 0;
	result = 0;
	length = 0;
	foundNumber = 0;
	digit = 0;

	/* Calculate the length of the string */
	while (str[length] != '\0')
		length++;

	while (index < length && foundNumber == 0)
	{
		if (str[index] == '-')
			++sign;

		if (str[index] >= '0' && str[index] <= '9')
		{
			digit = str[index] - '0';
			if (sign % 2)
				digit = -digit;
			result = result * 10 + digit;
			foundNumber = 1;
			if (str[index + 1] < '0' || str[index + 1] > '9')
				break;
			foundNumber = 0;
		}
		index++;
	}

	if (foundNumber == 0)
		return (0);

	return (result);
}
/**
 * main - Multiplies two numbers
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
