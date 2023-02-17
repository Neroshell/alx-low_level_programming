#include <stdio.h>

/**
*main - main fuction
*
*Return: would usually return 0
*/

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'a' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
