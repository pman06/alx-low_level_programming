#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * reverse_array - Function to return the reverse of array.
 * @a: the array
 * @n: size of the arraay
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int hold, i;

	for (i = 0; i < n / 2; i++)
	{
		hold = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = hold;
	}
}
