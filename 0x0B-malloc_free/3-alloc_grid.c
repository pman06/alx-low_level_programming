#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * alloc_grid - Function create multi demntional array
 * @width: array width variable
 * @height: array height variable
 * Return:  of i
 */
int **alloc_grid(int width, int height)
{
	int **i, l;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	i = malloc(height * sizeof(*i));

	if (i == NULL)
		return ('\0');

	for (l = 0; l < height; l++)
	{
		i[l] = malloc(width * sizeof(int));
		if (i[l] == NULL)
		{
			for (; l >= 0; l--)
				free(i[l]);
			free(i);
			return (NULL);
		}
		/*
		 * for (j = 0; j < width; j++)
		 * {
		 * i[l][j] = 0;
		 * }
		 */
	}
	return (i);
}
