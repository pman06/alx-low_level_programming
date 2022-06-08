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

	j = 0;
	k = 1;

	printf("0\n");
	for (i = 1; i < 50; i++)
	{
		prev = k;
		printf("%ld\n", k);
		k += j;
		j = prev;
	}
	return (0);
}
