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
	long int i, j, k, prev, sum;

	j = 1;
	k = 1;

	for (i = 0; i < 50; i++)
	{
		prev = k;
		if (k <= 4000000)
		{
			if (k % 2 == 0)
			{
				sum += k;
			}
		}
		k += j;
		j = prev;
	}
	printf("%ld\n", sum);
	return (0);
}
