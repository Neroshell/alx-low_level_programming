#include <stdio.h>

/**
* main - main function
* Return: always 0
*/

int main(void)
{
	int i;
	int add;

	add = 0;

	for (i = 0 ; i < 1024 ; i++)
	{
		if ((i % 3 == 0 || i % 5 == 0))
		{
			add = add + i;
		}
	}
	printf("%d\n", add);
	return (0);
}
