#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - creates a 2 dimensional array of int.
* @width: width of array.
* @height: height of array.
* Return: pointer to int array.
*         NULL on failure and if height or width = 0.
*/
int **alloc_grid(int width, int height)
{
	int **ar, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ar = malloc((height) * sizeof(int *));

	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}
	for (j = 0; j < height; j++)
	{
		ar[j] = malloc(width * sizeof(int));
		if (ar[j] == NULL)
		{
			free(ar);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (i = 0; i < width; i++)
			ar[j][i] = 0;
	}
	return (ar);
}
