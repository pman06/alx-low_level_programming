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
	int **i, *temp, l;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	i = malloc(height * sizeof(*i));
	temp = malloc(height * width * sizeof(i[0]));

	if (i == NULL)
	{
		return ('\0');
	}

	for (l = 0; l < height; l++)
	{
		i[l] = temp + (l * width);
		if (i[l] == NULL)
		{
			while (l >= 0)
			{
				free(i[l]);
				l--;
			}
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
