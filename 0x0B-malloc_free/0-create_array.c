#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * *create_array - Function to create array of char
 * @size: variable size
 * @c: variable char
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *j;

	if (size <= 0)
	{
		return ('\0');
	}

	j = malloc(size);

	for (i = 0; i < size; i++)
	{
		*(j + i) = c;
	}
	return (j);
}
