#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * malloc_checked - Function to return absolute values.
 * @b: the number to be checked
 * Return:  of i
 */
void *malloc_checked(unsigned int b)
{
	void *c = malloc(b);

	if (!c)
	{
		exit(98);
	}
	return (c);
}
