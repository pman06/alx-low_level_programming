#include <stdio.h>

/**
 * main - start of execution
 * Return: zero
 */

int main(void)
{
int i, j, k;

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar(i % 10 + '0');
				putchar(j % 10 + '0');
				putchar(k % 10 + '0');
				if ((k == 9) && (j == 8) && (i == 7))
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);

}
