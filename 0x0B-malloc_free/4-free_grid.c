#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* free_grid - free 2 dimension of array in this memory
* @grid: 2 dimension
* @height: height d-grid of array
* Description: free the memory of a grid
* Return: 0
*
*/

void free_grid(int **grid, int height)

{

	int j;

	for (j = 0; j < height; j++)
{

	free(grid[j]);

}
	free(grid);

}
