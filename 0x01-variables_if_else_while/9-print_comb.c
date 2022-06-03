#include <stdio.h>

/**
 * main - start of execution
 * Return: zero
 */

int main(void)
{
	int index;

	for (index = 0; index <= 9; index++)
	{
		putchar(index % 10 + '0');
		if (index != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}
