#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Entry point
 * description: frees a two dimensional grid previously
 * created
 * @grid: variable
 * @height: variable
 *
 * Return:0
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
