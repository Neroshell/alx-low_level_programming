#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings into a newly allocated space in memory
 * @s1: First input string
 * @s2: Second input string
 * Return: Pointer to the concatenated string, NULL if allocation fails
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	while (s1[len1] != '\0')
	len1++;
	while (s2[len2] != '\0')
	len2++;

	concatenated = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concatenated == NULL)
	return (NULL);

	for (i = 0; i < len1; i++)
	concatenated[i] = s1[i];

	for (j = 0; j < len2; i++, j++)
	concatenated[i] = s2[j];

	concatenated[i] = '\0';

	return (concatenated);
}
