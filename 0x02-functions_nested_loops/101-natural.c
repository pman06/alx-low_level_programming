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
	int d, sum;

	sum = 0;

	for (d = 0; d < 1024; d++)
	{
		if (d % 3 == 0 || d % 5 == 0)
		{
			sum += d;
		}
	}
	printf("%d\n", sum);
	return (0);
}
