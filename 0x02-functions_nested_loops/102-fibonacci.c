#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * main - Function to return absolute values.
 * Return:  of i
 */
int main(void)
{
	long int i, j, k, prev;

	j = 1;
	k = 1;

	for (i = 0; i < 50; i++)
	{
		prev = k;
		printf("%ld", k);
		if (i != 49)
		{
			printf(", ");
		}

		k += j;
		j = prev;
	}
	return (0);
}
