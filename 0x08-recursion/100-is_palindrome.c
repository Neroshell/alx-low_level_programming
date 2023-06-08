#include "main.h"

int check_palindrome(char *str, int start, int end);
int string_length(char *str);

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to be checked
 *
 * Return: 1 if it is a palindrome, 0 if it is not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check_palindrome(s, 0, string_length(s)));
}

/**
 * string_length - Calculates the length of a string
 * @str: The string to calculate the length of
 *
 * Return: The length of the string
 */
int string_length(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + string_length(str + 1));
}

/**
 * check_palindrome - Checks if a string is a palindrome recursively
 * @str: The string to be checked
 * @start: The start index of the substring to be checked
 * @end: The end index of the substring to be checked
 *
 * Return: 1 if it is a palindrome, 0 if it is not
 */
int check_palindrome(char *str, int start, int end)
{
	if (str[start] != str[end - 1])
		return (0);
	if (start >= end)
		return (1);
	return (check_palindrome(str, start + 1, end - 1));
}
