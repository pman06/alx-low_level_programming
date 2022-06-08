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
	long int j, k, prev, sum;

	j = 1;
	k = 1;
	sum = 0;

	while (sum < 4000000)
	{
		if (k % 2 == 0)
		{
			sum += k;
		}
		prev = k;
		k += j;
		j = prev;
	}

	printf("%ld\n", sum);

	return (0);
}
