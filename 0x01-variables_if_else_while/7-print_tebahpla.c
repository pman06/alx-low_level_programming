#include <stdio.h>

/**
 * main - start of execution
 * Return: zero
 */

int main(void)
{
	char index;

	for (index = 'z'; index >= 'a'; index--)
	{
		putchar(index);
	}
	putchar('\n');
	return (0);

}
