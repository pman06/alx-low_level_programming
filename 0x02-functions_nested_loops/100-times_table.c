#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Function to return absolute values.
 * @n: the number to be checked
 * Return:  of i
 */
void print_times_table(int n)
{
	int i, j, chk;

	if ((n <= 15) && (n >= 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (i == 0)
					printf("0");
				if (i != 0)
					printf("%d", (i * j));
				chk = i * (j + 1);
				if (chk < 10 && j != n)
					printf(",   ");
				if (chk >= 10 && chk < 100 && j != n)
					printf(",  ");
				if (chk >= 100 && j != n)
					printf(", ");
			}
		printf("\n");
		}
	}
}
