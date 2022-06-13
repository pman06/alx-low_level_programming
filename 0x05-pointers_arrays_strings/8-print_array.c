#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * print_array - Function to return absolute values.
 * @a: the array to print
 * @i: the number of times of arrays to print
 * Return:  void
 */
void print_array(int *a, int i)
{
	int j;

	for (j = 0; j < i; j++)
	{
		if (j != i - 1)
		{
			printf("%d, ", a[j]);
			continue;
		}
		printf("%d", a[j]);
	}
	printf("\n");

}
