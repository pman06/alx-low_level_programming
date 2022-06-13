#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * swap_int - Function to swap to variables
 * @a: the firsst number to swap
 * @b: the second number to swap
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int hold;

	hold = *a;
	*a = *b;
	*b = hold;
}
