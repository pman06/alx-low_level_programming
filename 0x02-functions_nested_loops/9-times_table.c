#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * times_table - Function to return absolute values.
 *
 * Return:  0
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		int n = 0;

		for (j = 0; j < 10; j++)
		{
			_putchar(n + '0');
		}
	}
}
