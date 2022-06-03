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
		putchar(' ');
		putchar(index % 10 + '0');
		putchar(',');
	}
	putchar('\n');
	return (0);

}
