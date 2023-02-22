#include "main.h"

/**
* _isalpha - function checks for upper and lower case alphabet
*
*@c: This parameter would be checked
*
* Return: 1 only if it an alphabet
* and 0 otherwise
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);

}
