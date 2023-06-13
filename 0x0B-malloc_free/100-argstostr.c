#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all command-line arguments into a single string
 * @ac: Number of command-line arguments
 * @av: Array of command-line arguments
 *
 * Return: Pointer to the concatenated string, NULL if allocation fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, total_length = 0, str_index = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			total_length++;
	}
	total_length += ac;

	str = malloc(sizeof(char) * (total_length + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[str_index] = av[i][j];
			str_index++;
		}
		if (str[str_index] == '\0')
		{
			str[str_index++] = '\n';
		}
	}
	return (str);
}
