#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - Function to print \ to the console.
 * @n: the number of time to print \
 * Return:  of i
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (j == i)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else
					_putchar(' ');
			}
		}
	}
	else
		_putchar('\n');
}
