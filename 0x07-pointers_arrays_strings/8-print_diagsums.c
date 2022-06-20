#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Function to that prints the sum of the two diagonals
 * @a: pointer to multideimentional array
 * @size: variable size of the array
 * Return:  of i
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sumrit, sumlft;

	sumrit = sumlft = 0;

	for (i = 0; i < size; i++)
	{
		sumrit += *((a + i * size + i));
		sumlft += *(a + (i * size) + size - 1 - i);
	}
	printf("%d, %d\n", sumrit, sumlft);
}
