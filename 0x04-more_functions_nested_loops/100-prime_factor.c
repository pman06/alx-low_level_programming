#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * print_triangle - Function that prints # as triangle
 * @n: the number of times to print trianlge
 * Return:  void
 */
void print_triangle(int n)
{
	int i, j, k;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = n - 1; j > i; j--)
			{
				_putchar(' ');
			}

			for (k = 0; k <= i; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
