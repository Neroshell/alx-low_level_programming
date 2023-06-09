#include <stdio.h>
#include "main.h"

/**
 * main - Prints all command line arguments
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int argumentIndex;

	for (argumentIndex = 0; argumentIndex < argc; argumentIndex++)
	{
		printf("%s\n", argv[argumentIndex]);
	}

	return (0);
}
