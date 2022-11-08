#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - main func
 * @width: int
 * @height: int
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	unsigned int i = 0, j = 0, width1, height1;
	int **grid;
	if (width < 1 || height < 1)
		return (NULL);
	width1 = width;
	height1 = height;
	grid = malloc(sizeof (int*) * height1);
	for (j = 0; j < width1; j++)
		grid[j] = (int*) malloc(sizeof (int) * width1);
	for (i = 0; i < height1; i++)
		for (j = 0; j < width1; j++)
			grid[i][j] = 0;
	return (grid);
}
