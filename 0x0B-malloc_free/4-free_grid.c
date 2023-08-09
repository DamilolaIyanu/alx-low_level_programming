#include "main.h"
#include <stdlib.h>

/**
 *free_grid - free two dimensional array
 *@grid:the array
 *@height: the height
 *Return: Returns nothing
 */

void free_grid(int **grid, int height)
{
	if (grid != 0 && height != 0)
	{
		while (height >= 0)
		{
			height--;
			free(grid[height]);
		}
		free(grid);
	}
}
