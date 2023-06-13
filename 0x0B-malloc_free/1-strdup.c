#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicate a string to a new memory space
 * @str: Pointer to the string to be duplicated
 * Return: Pointer to the duplicated string, NULL if failed
 */
char *_strdup(char *str)
{
	char *duplicate;
	int length = 0;
	int i;

	if (str == NULL)
	return (NULL);

	while (str[length] != '\0')
	length++;

	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
	return (NULL);

	for (i = 0; i < length; i++)
	duplicate[i] = str[i];

	duplicate[length] = '\0';

	return (duplicate);
}
