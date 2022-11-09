#include "main.h"
#include <stdlib.h>

/**
* free_grid - frees memory block on malloc failure.
*
* @grid: pointer to pointer of 2D array.
* @height: height of 2D array.
* Return: void.
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
