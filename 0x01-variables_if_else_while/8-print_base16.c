#include <stdio.h>

/**
 * main - start of execution
 * Return: zero
 */

int main(void)
{
	int index, i;

	for (index = 0; index <= 15; index++)
	{
		if (index < 10)
			putchar(index % 10 + '0');
		else
		{
			for (i = 'a'; i <= 'f'; i++)
				putchar(i);
			break;
		}
	}
	putchar('\n');
	return (0);

}
