#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * free_grid - Function that frees 2D array
 * @grid: array poiinter
 * @height: array height variable
 * Return:  void
 */
void free_grid(int **grid, int height)
{
	int l;

	for (l = 0; l < height; l++)
		free(grid[l]);
	free(grid);
}
