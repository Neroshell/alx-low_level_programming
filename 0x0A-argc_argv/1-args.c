#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 * Description: This program prints the number of arguments in the program.
 * Return: Always 0 Success
 */
int main(int argc, char *argv[])
{
	(void)argv; /* Ignoring the argv parameter to avoid unused variable warning */
	printf("%d\n", argc - 1);
	return (0);
}
