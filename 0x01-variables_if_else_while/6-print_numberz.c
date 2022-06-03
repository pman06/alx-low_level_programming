#include <stdio.h>
#include <unistd.h>
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
	}
	putchar('\n');
	return (0);

}
